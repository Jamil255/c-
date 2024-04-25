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

struct NGOData
{
    string ngoName;
    int numFoodProvided;
    int numMedicineProvided;
};

void addFamily(vector<Family> &families)
{
    Family family;
    cout << "Enter family ID: ";
    cin >> family.familyId;
    cout << "Enter number of family members: ";
    cin >> family.numMembers;
    // cout << "Enter number of medicines: ";
    // cin >> family.numMedicine;
    // cout << "Enter number of food items: ";
    // cin >> family.numFood;
    // family.hasHousing = false;
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
            cout << "Enter number of medicines: ";
            cin >> family.numMedicine;
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

void saveNGOData(const vector<NGOData> &ngoData)
{
    ofstream outFile("ngo_data.txt");
    if (outFile.is_open())
    {
        for (const NGOData &data : ngoData)
        {
            outFile << data.ngoName << "," << data.numFoodProvided << "," << data.numMedicineProvided << endl;
        }
        cout << "NGO data saved to file." << endl;
        outFile.close();
    }
    else
    {
        cout << "Error saving NGO data to file." << endl;
    }
}

void showNGOData()
{
    ifstream inFile("ngo_data.txt");
    if (inFile.is_open())
    {
        cout << "NGO Data: " << endl;
        string line;
        while (getline(inFile, line))
        {
            size_t commaPos = line.find(",");
            string ngoName = line.substr(0, commaPos);
            line = line.substr(commaPos + 1);
            commaPos = line.find(",");
            int numFoodProvided = stoi(line.substr(0, commaPos));
            int numMedicineProvided = stoi(line.substr(commaPos + 1));
            cout << "NGO: " << ngoName << endl;
            cout << "Food Provided: " << numFoodProvided << endl;
            cout << "Medicine Provided: " << numMedicineProvided << endl;
            cout << "------------------------" << endl;
        }
        inFile.close();
    }
    else
    {
        cout << "Error loading NGO data from file." << endl;
    }
}

int main()
{
    vector<Family> families;
    vector<NGOData> ngoData;
    int choice;

    do
    {
        cout << "Cyclone Management System" << endl;
        cout << "1. Add Family" << endl;
        cout << "2. Provide Medicine" << endl;
        cout << "3. Provide Food" << endl;
        cout << "4. Provide Housing" << endl;
        cout << "5. Save NGO Data" << endl;
        cout << "6. Show NGO Data" << endl;
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
            saveNGOData(ngoData);
            break;
        case 6:
            showNGOData();
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
