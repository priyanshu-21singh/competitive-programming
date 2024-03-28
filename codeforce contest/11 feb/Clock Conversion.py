# Function to convert time from 24-hour format to 12-hour format
def convert_to_12_hour_format(time):
    # Split the time into hours and minutes
    hours, minutes = map(int, time.split(':'))
    
    # Determine if it's AM or PM
    period = "AM" if hours < 12 else "PM"
    
    # Adjust hours
    if hours == 0:
        hours = 12
    elif hours > 12:
        hours -= 12
    
    # Return the time in 12-hour format
    return f"{hours:02d}:{minutes:02d} {period}"

# Input number of test cases
t = int(input())

# Iterate through each test case
for _ in range(t):
    # Input the time in 24-hour format
    time_24_hour = input()
    
    # Convert the time to 12-hour format and print
    print(convert_to_12_hour_format(time_24_hour))
