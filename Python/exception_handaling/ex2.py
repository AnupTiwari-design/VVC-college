nums = [1, 2, 3]

try:
    print(nums[5])  # This will raise IndexError
except IndexError:
    print(" Error: Index out of range")
else:
    print(" No error occurred")  # Only runs if no error
finally:
    print(" Finished (finally block always runs)")