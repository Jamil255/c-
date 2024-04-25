#include <iostream>
#include <vector>
#include <fstream>

using namespace std;

struct Family
{
    int familyId;
    int numMembers;
    int numMedicine;
    int numFood;
    bool hasHousing;
};

void addFamily(vector<Family> &families)
{
    Family family;
    cout << "Enter family ID: ";
    cin >> family.familyId;
    cout << "Enter number of family members: ";
    cin >> family.numMembers;
    cout << "Enter number of medicines: ";
    cin >> family.numMedicine;
    cout << "Enter number of food items: ";
    cin >> family.numFood;
    cout << "Does the family have housing? (1 for yes, 0 for no): ";
    cin >> family.hasHousing;
    families.push_back(family);
    cout << "Family added successfully!" << endl;
}

void provideMedicine(vector<Family> &families, int familyId, int numMedicine)
{
    for (Family &family : families)
    {
        if (family.familyId == familyId)
        {
            family.numMedicine += numMedicine;
            cout << numMedicine << " medicine(s) provided to Family ID " << familyId << endl;
            return;
        }
    }
    cout << "Family ID " << familyId << " not found." << endl;
}

void provideFood(vector<Family> &families, int familyId, int numFood)
{
    for (Family &family : families)
    {
        if (family.familyId == familyId)
        {
            family.numFood += numFood;
            cout << numFood << " food item(s) provided to Family ID " << familyId << endl;
            return;
        }
    }
    cout << "Family ID " << familyId << " not found." << endl;
}

void provideHousing(vector<Family> &families, int familyId)
{
    for (Family &family : families)
    {
        if (family.familyId == familyId)
        {
            family.hasHousing = true;
            cout << "Housing provided to Family ID " << familyId << endl;
            return;
        }
    }
    cout << "Family ID " << familyId << " not found." << endl;
}

void saveNGOData(const vector<Family> &families)
{
    ofstream outFile("ngo_data.txt");
    if (outFile.is_open())
    {
        for (const Family &family : families)
        {
            outFile << "Family ID: " << family.familyId << endl;
            outFile << "Number of members: " << family.numMembers << endl;
            outFile << "Number of medicines: " << family.numMedicine << endl;
            outFile << "Number of food items: " << family.numFood << endl;
            outFile << "Has housing: " << (family.hasHousing ? "Yes" : "No") << endl;
            outFile << "------------------------" << endl;
        }
        cout << "NGO data saved to file." << endl;
        outFile.close();
    }
    else
    {
        cout << "Error saving NGO data to file." << endl;
    }
}

void showNGOItems(const vector<Family> &families)
{
    cout << "NGO Items for Cyclone-Affected People:" << endl;
    for (const Family &family : families)
    {
        cout << "Family ID: " << family.familyId << endl;
        cout << "Number of medicines: " << family.numMedicine << endl;
        cout << "Number of food items: " << family.numFood << endl;
        cout << "------------------------" << endl;
    }
}

int main()
{
    vector<Family> families;
    int choice;

    do
    {
        cout << "Cyclone Management System" << endl;
        cout << "1. Add Family" << endl;
        cout << "2. Provide Medicine" << endl;
        cout << "3. Provide Food" << endl;
        cout << "4. Provide Housing" << endl;
        cout << "5. Save NGO Data" << endl;
        cout << "6. Show NGO Items for Cyclone-Affected People" << endl;
        cout << "7. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            addFamily(families);
            break;
        case 2:
        {
            int familyId, numMedicine;
            cout << "Enter Family ID: ";
            cin >> familyId;
            cout << "Enter number of medicines to provide: ";
            cin >> numMedicine;
            provideMedicine(families, familyId, numMedicine);
            break;
        }
        case 3:
        {
            int familyId, numFood;
            cout << "Enter Family ID: ";
            cin >> familyId;
            cout << "Enter number of food items to provide: ";
            cin >> numFood;
            provideFood(families, familyId, numFood);
            break;
        }
        case 4:
        {
            int familyId;
            cout << "Enter Family ID: ";
            cin >> familyId;
            provideHousing(families, familyId);
            break;
        }
        case 5:
            saveNGOData(families);
            break;
        case 6:
            showNGOItems(families);
            break;
        case 7:
            cout << "Exiting..." << endl;
            break;
        default:
            cout << "Invalid choice. Please try again." << endl;
            break;
        }

        cout << endl;
    } while (choice != 7);

    return 0;
}