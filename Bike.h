class Bike
{
protected:
    float speed;
public:
    
    virtual void Start() = 0;
    virtual void Brake(int pressure) = 0;
    virtual void Accelerate(int rate) = 0;
    virtual void Refuel() = 0;
    virtual float GetCurrentSpeed() = 0;
};