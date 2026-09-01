#include <stdio.h>

#define MAX_MEMBERS 100

// Structure to store member data
struct Member {
    int ID;
    float Height;
    float Weight;
};

// Function prototypes
void addMember(struct Member members[], int *numMembers);
void removeMember(struct Member members[], int *numMembers);
void updateMember(struct Member members[], int numMembers);
float calculateAverageHeight(struct Member members[], int numMembers);
float calculateAverageWeight(struct Member members[], int numMembers);
void calculateMinMaxHeightWeight(struct Member members[], int numMembers, float *maxHeight, float *maxWeight, float *minHeight, float *minWeight);
void displayBMIClassification(struct Member members[], int numMembers, int memberID);

int main() {
    struct Member members[MAX_MEMBERS];
    int numMembers = 0;
    int choice;

    do {
        printf("\n--- Gym Data Processing Menu ---\n");
        printf("1. Add member\n");
        printf("2. Remove member\n");
        printf("3. Update member\n");
        printf("4. Calculate average height\n");
        printf("5. Calculate average weight\n");
        printf("6. Calculate max and min height/weight\n");
        printf("7. Display BMI classification\n");
        printf("8. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                addMember(members, &numMembers);
                break;
            case 2:
                removeMember(members, &numMembers);
                break;
            case 3:
                updateMember(members, numMembers);
                break;
            case 4: {
                float avgHeight = calculateAverageHeight(members, numMembers);
                printf("Average height: %.2f\n", avgHeight);
                break;
            }
            case 5: {
                float avgWeight = calculateAverageWeight(members, numMembers);
                printf("Average weight: %.2f\n", avgWeight);
                break;
            }
            case 6: {
                float maxHeight, maxWeight, minHeight, minWeight;
                calculateMinMaxHeightWeight(members, numMembers, &maxHeight, &maxWeight, &minHeight, &minWeight);
                printf("Max height: %.2f\n", maxHeight);
                printf("Max weight: %.2f\n", maxWeight);
                printf("Min height: %.2f\n", minHeight);
                printf("Min weight: %.2f\n", minWeight);
                break;
            }
            case 7: {
                int memberID;
                printf("Enter member ID: ");
                scanf("%d", &memberID);
                displayBMIClassification(members, numMembers, memberID);
                break;
            }
            case 8:
                printf("Exiting program. Goodbye!\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    } while (choice != 8);

    return 0;
}

// Function to add a new member
void addMember(struct Member members[], int *numMembers) {
    if (*numMembers == MAX_MEMBERS) {
        printf("Maximum number of members reached.\n");
        return;
    }

    struct Member newMember;

    printf("Enter member ID: ");
    scanf("%d", &newMember.ID);

    printf("Enter height (in cm): ");
    scanf("%f", &newMember.Height);

    printf("Enter weight (in kg): ");
    scanf("%f", &newMember.Weight);

    members[*numMembers] = newMember;
    (*numMembers)++;

    printf("Member added successfully.\n");
}

// Function to remove a member
void removeMember(struct Member members[], int *numMembers) {
    int memberID;
    int found = 0;

    printf("Enter member ID to remove: ");
    scanf("%d", &memberID);

    for (int i = 0; i < *numMembers; i++) {
        if (members[i].ID == memberID) {
            // Shift remaining members to fill the gap
            for (int j = i; j < *numMembers - 1; j++) {
                members[j] = members[j + 1];
            }

            (*numMembers)--;
            found = 1;
            break;
        }
    }

    if (found) {
        printf("Member removed successfully.\n");
    } else {
        printf("Member with ID %d not found.\n", memberID);
    }
}

// Function to update a member
void updateMember(struct Member members[], int numMembers) {
    int memberID;
    int found = 0;

    printf("Enter member ID to update: ");
    scanf("%d", &memberID);

    for (int i = 0; i < numMembers; i++) {
        if (members[i].ID == memberID) {
            printf("Enter new height (in cm): ");
            scanf("%f", &members[i].Height);

            printf("Enter new weight (in kg): ");
            scanf("%f", &members[i].Weight);

            found = 1;
            break;
        }
    }

    if (found) {
        printf("Member updated successfully.\n");
    } else {
        printf("Member with ID %d not found.\n", memberID);
    }
}

// Function to calculate the average height of members
float calculateAverageHeight(struct Member members[], int numMembers) {
    float totalHeight = 0;

    for (int i = 0; i < numMembers; i++) {
        totalHeight += members[i].Height;
    }

    return totalHeight / numMembers;
}

// Function to calculate the average weight of members
float calculateAverageWeight(struct Member members[], int numMembers) {
    float totalWeight = 0;

    for (int i = 0; i < numMembers; i++) {
        totalWeight += members[i].Weight;
    }

    return totalWeight / numMembers;
}

// Function to calculate the maximum and minimum height and weight
void calculateMinMaxHeightWeight(struct Member members[], int numMembers, float *maxHeight, float *maxWeight, float *minHeight, float *minWeight) {
    *maxHeight = members[0].Height;
    *maxWeight = members[0].Weight;
    *minHeight = members[0].Height;
    *minWeight = members[0].Weight;

    for (int i = 1; i < numMembers; i++) {
        if (members[i].Height > *maxHeight) {
            *maxHeight = members[i].Height;
        }
        if (members[i].Weight > *maxWeight) {
            *maxWeight = members[i].Weight;
        }
        if (members[i].Height < *minHeight) {
            *minHeight = members[i].Height;
        }
        if (members[i].Weight < *minWeight) {
            *minWeight = members[i].Weight;
        }
    }
}

// Function to display the BMI classification of a member
void displayBMIClassification(struct Member members[], int numMembers, int memberID) {
    int found = 0;
    float height, weight;
    int bmi=(weight)/(height)*(height);
    return bmi;s
