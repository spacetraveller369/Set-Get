#include <iostream>
#include <string>
using namespace std;


/*class Person {

private:
    string name;
    int age;
    string country;
    double height;
    double weight;
    string color_hair;
    string mood;
    string hobby;
    int energy;
    string dream;
    bool is_alive = true;

public:
    void SetName(string n) {
        name = n;
    }
    void SetAge(int a) {
        if (a >= 1 && a <= 100) {
            age = a;
        }
        else {
            cout << "Age is unreal\n";
        }
    }
    void SetCountry(string c) {
        country = c;
    }
    void SetHeight(double h) {
        if (h >= 130 && h <= 200) {
            height = h;
        }
        else {
            cout << "Height is unreal\n";
        }
    }
    void SetWeight(double w) {
        if (w >= 30 && w <= 120) {
            weight = w;
        }
        else {
            cout << "Weight is unreal\n";
        }
    }
    void SetColorHair(string ch) {
        color_hair = ch;
    }
    void SetMood(string m) {
        mood = m;
    }
    void SetHobby(string hb) {
        hobby = hb;
    }
    void SetEnergy(int e) {
        if (e >= 1 && e <= 100) {
            energy = e;
        }
        else {
            cout << "Energy is unreal\n";
        }
    }
    void SetDream(string d) {
        dream = d;
    }
    void SetAliveStatus(bool is_alive) {
        if (is_alive) {
            is_alive = true;
            cout << "The person is alive.\n";
        }
        else {
            is_alive = false;
            cout << "The person is not alive.\n";
        }
    }
    
    string GetName() {
        return name;
    }
    int GetAge() const {
        return age;
    }
    string GetCountry() {
        return country;
    }
    double GetHeight() {
        return height;
    }
    double GetWeight() {
        return weight;
    }
    string GetColorHair() {
        return color_hair;
    }
    string GetMood() {
        return mood;
    }
    string GetHobby() {
        return hobby;
    }
    int GetEnergy() const {
        return energy;
    }
    string GetDream() {
        return dream;
    }
    bool GetAliveStatus() {
        return is_alive;
    }

    void Eat(string meal) {
        cout << GetName() << " is eating...\n";
    }

    void Sleep() {
        cout << GetName() << " is sleeping...\n";
    }

    void Walk(string street) {
        cout << GetName() << " is walking down " << street << "...\n";
    }

    void Work() {
        cout << GetName() << " is working...\n";
    }

    void Read() {
        cout << GetName() << " is reading...\n";
    }
};

    int main() {
     
        Person person;

        person.SetName("Ilona");
        person.SetAge(30);
        person.SetCountry("Ukraine");
        person.SetHeight(169);
        person.SetWeight(65);
        person.SetColorHair("brown");
        person.SetMood("good");
        person.SetHobby("reading");
        person.SetEnergy(20);
        person.SetDream("wealth");
        person.SetAliveStatus("true");

        person.Eat("food");
        person.Sleep();
        person.Work();
        person.Walk("street");
        person.Read();

        return 0;
    } 
    

class Cockroach {

private:
    string name;
    double size;
    int paws_count;
    string color;
    string desire;
    int energy;
    bool is_alive = true;
    bool is_awful = true;
    bool is_dangerous = false;

public:
    void SetName(string n) {
        name = n;
    }
    void SetSize(double s) {
        if (s >= 1 && s <= 30) {
            size = s;
        }
        else {
            cout << "Size is unreal\n";
        }
    }
    void SetPawsCount(int pc) {
        if (pc == 4) {
            paws_count = pc;
        }
        else {
            cout << "Maybe cockroach is disabled?\n";
        }
    }
    void SetColor(string c) {
        color = c;
    }
    void SetDesire(string d) {
        desire = d;
    }
    void SetEnergy(int e) {
        if (e >= 1 && e <= 100) {
            energy = e;
        }
        else {
            cout << "Energy is unreal\n";
        }
    }
    void SetAliveStatus(bool alive) {
        if (alive) {
            is_alive = true;
            cout << "Cockroach is alive.\n";
        }
        else {
            is_alive = false;
            cout << "Cockroach is not alive.\n";
        }
    }
    void SetAfwulStatus(bool awful) {
        if (awful) {
            is_awful = true;
            cout << "Cockroach is awful.\n";
        }
        else {
            is_awful = false;
            cout << "Cockroach is nice.\n";
        }
    }
    void SetDangStatus(bool dangerous) {
        if (dangerous) {
            is_dangerous = true;
            cout << "Cockroach is dangerous for your life!!!.\n";
        }
        else {
            is_dangerous = false;
            cout << "Cockroach is safe.\n";
        }
    }

   
    string GetName() {
        return name;
    }
    double GetSize() {
        return size;
    }
    int GetPawsCount() {
        return paws_count;
    }
    string GetColor() {
        return color;
    }
    string GetDesire() {
        return desire;
    }
   int GetEnergy() const {
        return energy;
    }
    bool GetAliveStatus() {
        return is_alive;
    }
    bool GetAwfulStatus()
    {
        return is_awful;
    }
    bool GetDangStatus()
    {
        return is_awful;
    };

    
     void Eat(string meal) {
        cout << GetName() << " is eating...\n";
    }

    void Sleep() {
        cout << GetName() << " is sleeping...\n";
    }

    void Run(string slipper) {
        cout << GetName() << " is running...\n";
    }

    void MakeDisaster() {
        cout << GetName() << " is making a disaster everywhere he appears...\n";
    }

    void Frighten() {
        cout << GetName() << "  frightens everyone in the house...\n";
    }
};

int main() {

    Cockroach cockroach;

    cockroach.SetColor("brown");
    cockroach.SetEnergy(100);
    cockroach.SetSize(10);
    cockroach.SetAliveStatus(true);
    cockroach.SetDangStatus(false);
    cockroach.SetAfwulStatus(true);
    cockroach.SetDesire("eat");
    cockroach.SetName("Victor");
    cockroach.SetPawsCount(4);

    cockroach.Eat("garbage");
    cockroach.Run("slipper");
    cockroach.MakeDisaster();
    cockroach.Frighten();

    return 0;
} 

class Fridge {

private:
    string model;
    int working_period;
    string origin;
    double height;
    double weight;
    string color;
    string type;
    int energy;
    bool is_work = true;

public:
    void SetModel(string m) {
        model = m;
    }
    void SetWorkingPeriod(int p) {
        if (p >= 1 && p <= 20) {
            working_period = p;
        }
        else {
            cout << "Period is too long to work\n";
        }
    }
    void SetOrigin(string o) {
        origin = o;
    }
    void SetHeight(double h) {
        if (h >= 100 && h <= 200) {
            height = h;
        }

    }
    void SetWeight(double w) {
        if (w >= 10 && w <= 50) {
            weight = w;
        }

    }
    void SetColor(string c) {
        color = c;
    }
    void SetType(string t) {
        type = t;
    }
    void SetEnergy(int e) {
        if (e >= 1 && e <= 100) {
            energy = e;
        }
        else {
            cout << "Energy is unreal\n";
        }
    }
    void SetWorkStatus(bool work) {
        if (work) {
            is_work = true;
            cout << "Fridge is working properly.\n";
        }
        else {
            is_work = false;
            cout << "You should repair it.\n";
        }
    }


    string GetModel() {
        return model;
    }
    int GetWorkingPeriod() {
        return working_period;
    }
    string GetColor() {
        return color;
    }
    string GetType() {
        return type;
    }
    int GetEnergy() const {
        return energy;
    }
    bool GetWorkStatus() {
        return is_work;
    };

    void Freeze(string food) {
        cout << GetModel() << "  is freezing food good...\n";
    }

    void Give(string food) {
        cout << GetModel() << "  is giving me food...\n";
    }

    void Work() {
        cout << GetModel() << "  is working while electricity is in house...\n";
    }

    void Save() {
        cout << GetModel() << "  saves my masks and cremes...\n";
    }

    void Make() {
        cout << GetModel() << "  makes an ice...\n";
    }
};


    int main() {

        Fridge fridge;

        fridge.SetModel("Liebherr");
        fridge.SetWorkingPeriod(10);
        fridge.SetOrigin("Germany");
        fridge.SetHeight(150);
        fridge.SetWeight(40);
        fridge.SetColor("grey");
        fridge.SetType("domestic");
        fridge.SetEnergy(80);
        fridge.SetWorkStatus(true);

        fridge.Freeze("food");
        fridge.Give("food");
        fridge.Save();
        fridge.Work();
        fridge.Make();

        return 0;
    }

class Plant {

private:
    string kind;
    string country;
    double height;
    double weight;
    string color;
    string condition;
    int energy;
    string desire;
    bool is_alive = true;

public:
    void SetKind(string k) {
        kind = k;
    }
    void SetCountry(string c) {
        country = c;
    }
    void SetHeight(double h) {
        if (h >= 1 && h <= 50) {
            height = h;
        }
    }
    void SetWeight(double w) {
        if (w >= 1 && w <= 10) {
            weight = w;
        }
    }
    void SetColor(string clr) {
        color = clr;
    }
    void SetCondition(string cnd) {
        condition = cnd;
    }
    void SetEnergy(int e) {
        if (e >= 1 && e <= 100) {
            energy = e;
        }
    }
    void SetDesire(string d) {
        desire = d;
    }
    void SetAliveStatus(bool alive) {
        if (alive) {
            is_alive = true;
            cout << "Plant is alive.\n";
        }
    }

    string GetKind() {
        return kind;
    }
    string GetCountry() {
        return country;
    }
    double GetHeight() {
        return height;
    }
    double GetWeight() {
        return weight;
    }
    string GetColor() {
        return color;
    }
    string GetCondition() {
        return condition;
    }
    int GetEnergy() const {
        return energy;
    }
    string GetDesire() {
        return desire;
    }
    bool GetAliveStatus() {
        return is_alive;
    };


    void Drink(string water) {
        cout << GetKind() << " is drinking...\n";
    }

    void Grow() {
        cout << GetKind() << " is growing...\n";
    }

    void Give(string oxygen) {
        cout << GetKind() << " is giving me an oxygen to breathe...\n";
    }

    void Joy() {
        cout << GetKind() << " is giving a joy to my cat...\n";
    }
};

int main() {

    Plant plant;
    plant.SetKind("hibiscus");
    plant.SetCountry("Ukraine");
    plant.SetHeight(30);
    plant.SetWeight(2);
    plant.SetColor("green");
    plant.SetCondition("good");
    plant.SetEnergy(90);
    plant.SetDesire("water");

    plant.Drink("water");
    plant.Grow();
    plant.Give("oxygen");
    plant.Joy();

    return 0;     
} 

class Computer {

private:
    string kind;
    int age;
    string origin;
    double height;
    double weight;
    string color;
    string condition;
    bool work = true;

public:
    void SetKind(string k) {
        kind = k;
    }
    void SetAge(int a) {
        if (a >= 1 && a <= 10) {
            age = a;
        }
    }
    void SetOrigin(string o) {
        origin = o;
    }
    void SetHeight(double h) {
        if (h >= 10 && h <= 20) {
            height = h;
        }

    }
    void SetWeight(double w) {
        if (w >= 0 && w <= 5) {
            weight = w;
        }

    }
    void SetColor(string c) {
        color = c;
    }
    void SetCondition(string cond) {
        condition = cond;
    }
    void SetWorkStatus(bool work) {
        if (work) {
            work = true;
            cout << "Computer is working properly.\n";
        }

    };


    string GetKind() {
        return kind;
    }
    int GetAge() {
        return age;
    }
    string GetOrigin() {
        return origin;
    }
    string GetColor() {
        return color;
    }
    double GetHeight() {
        return height;
    }
    double GetWeight() {
        return weight;
    }
    string GetColor() {
        return color;
    }
    string GetCondition() {
        return condition;
    };

    void Eat(string electricity) {
        cout << GetKind() << "  eats some electricity..\n";
    }

    void Teach() {
        cout << GetKind() << "  teaches me...\n";
    }

    void Give(string money) {
        cout << GetKind() << "  gives me some money...\n";
    }

    void Joy() {
        cout << GetKind() << "  shows me films...\n";
    }
};


int main() {

    Computer computer;

    computer.SetAge(2);
    computer.SetOrigin("China");
    computer.SetHeight(10);
    computer.SetWeight(1);
    computer.SetColor("black");
    computer.SetCondition("good");
    computer.Eat("electricity");
    computer.Teach();
    computer.Give("money");
    computer.Joy();

    return 0;
}
*/
