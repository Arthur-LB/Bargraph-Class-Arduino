class Bargraph {
  public:
    Bargraph(byte ABpin, byte CLKpin, unsigned char maxval, byte smode);
    void Clear();
    void SetValue(unsigned char value);
    void Inc();
    void Dec();
    void Mode(byte smode);
    unsigned char getVal();
  private:
    unsigned char _maxval;
    unsigned char _val;
    byte _AB;
    byte _CLK;
    byte _mode;
};

Bargraph::Bargraph(byte ABpin=12, byte CLKpin=13, unsigned char maxval=8, byte smode=0){
  _val = 0;
  _AB = ABpin;
  _CLK = CLKpin;
  _maxval = maxval;
  if(smode==0 || smode==1){
    _mode = smode;
  } else {
    _mode = 0;
  }
  pinMode(_AB, OUTPUT);
  pinMode(_CLK, OUTPUT);
  
  
}

unsigned char Bargraph::getVal(){
  return _val;
}

void Bargraph::Clear(){
  digitalWrite(_AB, LOW);
  for(int i=0; i<_maxval; i++){
    digitalWrite(_CLK, LOW);
    digitalWrite(_CLK, HIGH);
  }
  _val = 0;
}

void Bargraph::SetValue(unsigned char value){
  if(value > _maxval){
    value = _maxval;
  }
  Clear();
  digitalWrite(_AB, HIGH);
  if(_mode == 1 && value !=0){
    digitalWrite(_CLK, LOW);
    digitalWrite(_CLK, HIGH);
  }
  if(_mode == 1){//mode trait
    value = value - 1;
  }
  if(_mode == 0) digitalWrite(_AB, HIGH); //mode colonne
  else digitalWrite(_AB, LOW); //mode trait
  for(int i=0; i<value; i++){
    digitalWrite(_CLK, LOW);
    digitalWrite(_CLK, HIGH);
  }
  _val = value +1;
}

void Bargraph::Inc(){
  SetValue(_val+1);
}

void Bargraph::Dec(){
  SetValue(_val-1);
}

void Bargraph::Mode(byte smode){
  if(smode==0 || smode==1){
    _mode = smode;
    SetValue(_val);
  }
}
