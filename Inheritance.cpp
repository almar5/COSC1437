#include <iostream>
#include <string>

using namespace std;

// Superclass
class StemJobs 
{
protected:
    string name;
public:
    StemJobs(string n) : name(n) {}
    virtual void display() 
    {
        cout << "Stem Job: " << name << endl;
    }
};

// Subclasses of StemJobs
class ScienceJobs : public StemJobs 
{
public:
    ScienceJobs(string n) : StemJobs(n) {}
};
class MathJobs : public StemJobs 
{
public:
    MathJobs(string n) : StemJobs(n) {}
};
class EngineeringJobs : public StemJobs 
{
public:
    EngineeringJobs(string n) : StemJobs(n) {}
};

// Subclasses of ScienceJobs
class Physicist : public ScienceJobs 
{
public:
    Physicist() : ScienceJobs("Physicist") {}
};
class LaboratoryTechnician : public ScienceJobs 
{
public:
    LaboratoryTechnician() : ScienceJobs("Laboratory Technician") {}
};
class ClinicalResearchAssociate : public ScienceJobs 
{
public:
    ClinicalResearchAssociate() : ScienceJobs("Clinical Research Associate") {}
};

// Subclasses of MathJobs
class Statistician : public MathJobs 
{
public:
    Statistician() : MathJobs("Statistician") {}
};
class DataAnalyst : public MathJobs 
{
public:
    DataAnalyst() : MathJobs("Data Analyst") {}
};
class Accountant : public MathJobs 
{
public:
    Accountant() : MathJobs("Accountant") {}
};

// Subclasses of EngineeringJobs
class ElectricalEngineer : public EngineeringJobs 
{
public:
    ElectricalEngineer() : EngineeringJobs("Electrical Engineer") {}
};
class MechanicalEngineer : public EngineeringJobs 
{
public:
    MechanicalEngineer() : EngineeringJobs("Mechanical Engineer") {}
};
class CivilEngineer : public EngineeringJobs 
{
public:
    CivilEngineer() : EngineeringJobs("Civil Engineer") {}
};

int main() 
{
    // Creating objects
    Physicist physicist;
    LaboratoryTechnician labTech;
    ClinicalResearchAssociate researchAssociate;

    Statistician statistician;
    DataAnalyst dataAnalyst;
    Accountant accountant;

    ElectricalEngineer electricalEngineer;
    MechanicalEngineer mechanicalEngineer;
    CivilEngineer civilEngineer;

    // displaying 
    physicist.display();
    labTech.display();
    researchAssociate.display();

    statistician.display();
    dataAnalyst.display();
    accountant.display();

    electricalEngineer.display();
    mechanicalEngineer.display();
    civilEngineer.display();

    return 0;
}
