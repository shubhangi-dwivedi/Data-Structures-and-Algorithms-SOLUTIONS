//1603. Design Parking System

class ParkingSystem {
    vector<int> car;
public:
    ParkingSystem(int big, int medium, int small) {
        
        car={big,medium,small};
    }
    
    bool addCar(int carType) {
        if(car[carType-1])
        {
            car[carType-1]-=1;
            return true;
        }
        return false;
    }
};

/**
 * Your ParkingSystem object will be instantiated and called as such:
 * ParkingSystem* obj = new ParkingSystem(big, medium, small);
 * bool param_1 = obj->addCar(carType);
 */