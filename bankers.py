import numpy as np

def is_safe(processes, available, max_need, allocation):
    num_processes = len(processes)
    num_resources = len(available)

    work = available.copy()
    finish = [False] * num_processes
    safe_sequence = []

    while True:
        found = False
        for i in range(num_processes):
            if not finish[i]:
                if all(max_need[i] - allocation[i] <= work):
                    work += allocation[i]
                    finish[i] = True
                    safe_sequence.append(processes[i])
                    found = True

        if not found:
            break

    if all(finish):
        return safe_sequence
    else:
        return None

def main():
    num_processes = int(input("Enter the number of processes: "))
    num_resources = int(input("Enter the number of resource types: "))

    # Initialize data structures
    processes = list(range(num_processes))
    available = np.array([int(x) for x in input("Enter the available resources (e.g., '3 3 2'): ").split()])
    max_need = np.zeros((num_processes, num_resources), dtype=int)
    allocation = np.zeros((num_processes, num_resources), dtype=int)

    # Input maximum need and allocation for each process
    for i in range(num_processes):
        max_need[i] = np.array([int(x) for x in input(f"Enter the maximum need for Process {i} (e.g., '7 5 3'): ").split()])
        allocation[i] = np.array([int(x) for x in input(f"Enter the allocation for Process {i} (e.g., '0 1 0'): ").split()])

    safe_sequence = is_safe(processes, available, max_need, allocation)
    if safe_sequence:
        print("Safe Sequence:", safe_sequence)
    else:
        print("No safe sequence exists.")

if __name__ == "_main_":
    main()

#5
#3
#332 753 010 322 200 902 302 222 211 433 002