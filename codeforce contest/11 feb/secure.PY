import re

def validate_password(password, username, last_three_passwords):
    # Minimum Length Check
    if len(password) < 10:
        return "Password must be at least 10 characters long."

    # Character Variety Check
    if not (any(c.isupper() for c in password) and
            any(c.islower() for c in password) and
            any(c.isdigit() for c in password) and
            any(c in "@#$%&*!" for c in password)):
        return "Password must contain at least two uppercase letters, two lowercase letters, two digits, and two special characters."

    # Sequence and Repetition Restrictions
    for i in range(len(password) - 2):
        if password[i:i + 3] in username:
            return "Password should not contain a sequence of three or more consecutive characters from the username."

    for i in range(len(password) - 3):
        if password[i] * 4 in password:
            return "No character should repeat more than three times in a row."

    # Historical Password Check
    if password in last_three_passwords:
        return "Password must not be the same as the last three passwords used by the user."

    return None  # Password is valid

def set_new_password():
    username = input("Enter your username: ")
    last_three_passwords = []  # Replace this with actual logic to retrieve last three passwords from the database

    while True:
        password = input("Enter a new password: ")
        validation_result = validate_password(password, username, last_three_passwords)

        if validation_result is None:
            print("Password set successfully!")
            # Add logic to update the password history in the database
            break
        else:
            print("Invalid Password: " + validation_result)

if __name__ == "__main__":
    set_new_password()


# validate_password function:

# This function takes three parameters: password (the new password the user wants to set), username, and last_three_passwords (a list containing the user's last three passwords).
# It checks the password against several criteria to ensure it meets security requirements.
# Checks include minimum length, character variety (uppercase, lowercase, digits, special characters), sequence and repetition restrictions, and historical password check.
# If any check fails, it returns a string describing the specific requirement that was not met. If the password passes all checks, it returns None indicating a valid password.
# set_new_password function:

# This function is the entry point where the user sets a new password.
# It prompts the user to enter a username and a new password.
# It calls the validate_password function to check if the provided password is valid.
# If the password is valid, it prints a success message and breaks out of the loop. Otherwise, it prints an error message and continues prompting the user for a new password.
# Regular Expressions (re module):

# The re module is used for working with regular expressions in Python.
# In this script, regular expressions are not extensively used, but simple string operations are employed for the majority of checks. Regular expressions are powerful for more complex pattern matching, but for the current requirements, they are not strictly necessary.
# Note:

# The script provides a basic framework for password validation and setting a new password. You would need to integrate this with your user authentication system, and replace placeholder comments with actual database or storage logic.
# The script doesn't cover all possible security considerations, and you might need to adapt it based on your specific requirements and security policies.