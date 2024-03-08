import datetime

class LibrarySystem:
    def __init__(self):
        self.catalog = {
            1: {"title": "Book1", "author": "Author1", "quantity": 5},
            2: {"title": "Book2", "author": "Author2", "quantity": 3},
            # Add more books as needed
        }
        self.users = {}
        self.transactions = []

    def display_catalog(self):
        print("Catalog:")
        for book_id, details in self.catalog.items():
            print(f"ID: {book_id}, Title: {details['title']}, Author: {details['author']}, Available: {details['quantity']}")

    def register_user(self, user_id, name):
        if user_id not in self.users:
            self.users[user_id] = {"name": name, "checked_out_books": {}}
            print(f"User {name} registered successfully.")
        else:
            print("User ID already exists. Please choose a different ID.")

    def checkout_book(self, user_id, book_id):
        if user_id not in self.users:
            print("User not registered. Please register first.")
            return False

        if book_id not in self.catalog or self.catalog[book_id]["quantity"] == 0:
            print("Book not available for checkout.")
            return False

        if len(self.users[user_id]["checked_out_books"]) >= 3:
            print("You have reached the maximum limit of checked-out books (3).")
            return False

        self.users[user_id]["checked_out_books"][book_id] = {"checkout_date": datetime.date.today()}
        self.catalog[book_id]["quantity"] -= 1
        self.transactions.append({"user_id": user_id, "book_id": book_id, "action": "checkout"})
        print(f"Book '{self.catalog[book_id]['title']}' checked out successfully.")
        return True

    def return_book(self, user_id, book_id):
        if user_id not in self.users or book_id not in self.users[user_id]["checked_out_books"]:
            print("Invalid user or book ID. Please check and try again.")
            return False

        checkout_date = self.users[user_id]["checked_out_books"][book_id]["checkout_date"]
        due_date = checkout_date + datetime.timedelta(days=14)
        today = datetime.date.today()

        if today > due_date:
            overdue_days = (today - due_date).days
            fine = overdue_days * 1  # $1 per day overdue
            print(f"Book returned after due date. Overdue fine: ${fine}")

        self.catalog[book_id]["quantity"] += 1
        del self.users[user_id]["checked_out_books"][book_id]
        self.transactions.append({"user_id": user_id, "book_id": book_id, "action": "return"})
        print(f"Book '{self.catalog[book_id]['title']}' returned successfully.")
        return True

    def list_overdue_books(self, user_id):
        if user_id not in self.users:
            print("Invalid user ID. Please check and try again.")
            return

        overdue_books = []

        for book_id, details in self.users[user_id]["checked_out_books"].items():
            checkout_date = details["checkout_date"]
            due_date = checkout_date + datetime.timedelta(days=14)
            today = datetime.date.today()

            if today > due_date:
                overdue_days = (today - due_date).days
                fine = overdue_days * 1  # $1 per day overdue
                overdue_books.append({"book_id": book_id, "fine": fine})

        if overdue_books:
            print("Overdue Books:")
            for overdue_book in overdue_books:
                print(f"Book ID: {overdue_book['book_id']}, Overdue Fine: ${overdue_book['fine']}")
        else:
            print("No overdue books.")

    def display_transactions(self):
        print("Transactions:")
        for transaction in self.transactions:
            action = "Checked Out" if transaction["action"] == "checkout" else "Returned"
            print(f"User ID: {transaction['user_id']}, Book ID: {transaction['book_id']}, Action: {action}")

# CLI for Library System
def library_cli():
    library_system = LibrarySystem()

    while True:
        print("\nLibrary Management System CLI")
        print("1. Display Catalog")
        print("2. Register User")
        print("3. Checkout Book")
        print("4. Return Book")
        print("5. List Overdue Books")
        print("6. Display Transactions")
        print("7. Exit")

        choice = input("Enter your choice (1-7): ")

        if choice == '1':
            library_system.display_catalog()
        elif choice == '2':
            user_id = int(input("Enter User ID: "))
            name = input("Enter User Name: ")
            library_system.register_user(user_id, name)
        elif choice == '3':
            user_id = int(input("Enter User ID: "))
            book_id = int(input("Enter Book ID: "))
            library_system.checkout_book(user_id, book_id)
        elif choice == '4':
           
# Class Definition: LibrarySystem
# The script starts by defining a class called LibrarySystem to encapsulate the functionality of the library management system. Here's a breakdown of the key methods:

# __init__(self): The class constructor initializes the system with a predefined catalog, an empty user registry, and an empty list of transactions.

# display_catalog(self): This method displays the current catalog of books, including their IDs, titles, authors, and availability status.

# register_user(self, user_id, name): Registers a new user with a unique ID and a name.

# checkout_book(self, user_id, book_id): Allows a user to check out a book by specifying the user ID and the book ID. It records the checkout date and updates the catalog and transactions accordingly.

# return_book(self, user_id, book_id): Handles the return of a book, updating the catalog and transactions. If the book is returned after the due date, it calculates and prints the overdue fine.

# list_overdue_books(self, user_id): Lists all overdue books for a particular user along with the total fine due.

# display_transactions(self): Displays a list of transactions (books checked out or returned) in the system.

# 2. CLI for Library System: library_cli()
# The script includes a simple command-line interface (CLI) function named library_cli() to interact with the library management system. Here's how it works:

# Inside the while True loop, the user is presented with a menu displaying various options.

# Based on the user's choice (1-7), corresponding methods of the LibrarySystem class are invoked.

# The CLI continues to run until the user chooses the "Exit" option.

# 3. Example Usage
# The script concludes with an example usage of the LibrarySystem and the CLI. This includes displaying the catalog, registering a user, checking out books, returning a book, listing overdue books, and displaying transactions.

# Notes:
# The script uses basic data structures such as dictionaries and lists to manage information about books, users, and transactions.

# The script is designed for simplicity and may need further enhancements based on specific requirements