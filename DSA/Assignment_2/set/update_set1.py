# Program to update first set with items that don't exist in the second set
# This adds elements from set1 that are not present in set2

def update_set_with_difference(set1, set2):
    """
    Update set1 with items that don't exist in set2
    This is equivalent to set1 = set1 - set2 (difference operation)
    """
    # Find elements in set1 that are not in set2
    difference = set1 - set2
    
    # Clear set1 and update it with the difference
    set1.clear()
    set1.update(difference)
    
    return set1

def main():
    # Create two sample sets
    set1 = {1, 2, 3, 4, 5, 6}
    set2 = {4, 5, 6, 7, 8, 9}
    
    print("Original sets:")
    print(f"Set 1: {set1}")
    print(f"Set 2: {set2}")
    
    # Update set1 with items that don't exist in set2
    update_set_with_difference(set1, set2)
    
    print("\nAfter updating set1 with items that don't exist in set2:")
    print(f"Updated Set 1: {set1}")
    print(f"Set 2 (unchanged): {set2}")
    
    # Alternative method using difference_update()
    print("\n" + "="*50)
    print("Alternative method using difference_update():")
    
    # Reset sets for demonstration
    set1 = {1, 2, 3, 4, 5, 6}
    set2 = {4, 5, 6, 7, 8, 9}
    
    print(f"Original Set 1: {set1}")
    print(f"Original Set 2: {set2}")
    
    # Use built-in difference_update method
    set1.difference_update(set2)
    
    print(f"Set 1 after difference_update: {set1}")
    
    # Example with user input
    print("\n" + "="*50)
    print("Example with user input:")
    
    try:
        # Get input from user
        input_set1 = input("Enter elements for set 1 (comma-separated): ")
        input_set2 = input("Enter elements for set 2 (comma-separated): ")
        
        # Convert input to sets
        user_set1 = set(map(int, input_set1.split(',')))
        user_set2 = set(map(int, input_set2.split(',')))
        
        print(f"\nUser Set 1: {user_set1}")
        print(f"User Set 2: {user_set2}")
        
        # Update set1 with difference
        user_set1.difference_update(user_set2)
        
        print(f"Updated Set 1 (items not in Set 2): {user_set1}")
        
    except ValueError:
        print("Invalid input. Please enter integers separated by commas.")

if __name__ == "__main__":
    main()