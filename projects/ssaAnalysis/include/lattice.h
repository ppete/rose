namespace scc_private
{

class LatticeCell
{
 protected:
  bool isTop_;
  bool isBottom_;

 public:
  LatticeCell() : isTop_(false), isBottom_(false) {};
  LatticeCell(bool isTop, bool isBottom) : isTop_(false), isBottom_(false) {};
  virtual ~LatticeCell() {};

  bool isTop() { return isTop_; };
  bool isBottom() { return isBottom_; };
  void top() { isTop_ = true; };
  void bottom() { isBottom_ = true; };

  virtual bool isIntLattice() = 0;
  virtual bool isLongLattice() = 0;
  virtual bool isFloatLattice() = 0;
  virtual bool isDoubleLattice() = 0;
  virtual bool isBooleanLattice() = 0;
  virtual LatticeCell * copy() = 0;
};

class IntLatticeCell : public LatticeCell 
{
 protected:
   int value_;
   
 public:
   IntLatticeCell() : value_(0) {};
   IntLatticeCell(bool isTop, bool isBottom, int value) 
     : value_(value) { this->isTop_ = isTop; this->isBottom_ =  isBottom; };
   virtual ~IntLatticeCell() {};
   
   int getValue() { return value_; };
   void setValue(int value) { this->value_ = value; };

   virtual bool isIntLattice() { return true; };
   virtual bool isLongLattice() { return false; };
   virtual bool isFloatLattice() { return false; };
   virtual bool isDoubleLattice() { return false; };
   virtual bool isBooleanLattice() { return false; };
   virtual LatticeCell * copy() { return new IntLatticeCell(isTop_, isBottom_, value_); };
};

class LongLatticeCell : public LatticeCell
{
 protected:
  long value_;

 public:
  LongLatticeCell() : value_(0) {};
  LongLatticeCell(bool isTop, bool isBottom, long value)
    : value_(value) { this->isTop_ = isTop; this->isBottom_ =  isBottom; };
  virtual ~LongLatticeCell() {};

  long getValue() { return value_; };
  void setValue(long value) { this->value_ = value; };

  virtual bool isIntLattice() { return false; };
  virtual bool isLongLattice() { return true; };
  virtual bool isFloatLattice() { return false; };
  virtual bool isDoubleLattice() { return false; };
  virtual bool isBooleanLattice() { return false; };
  virtual LatticeCell * copy() { return new LongLatticeCell(isTop_, isBottom_, value_); };
};

class FloatLatticeCell : public LatticeCell
{
 protected:
  float value_;

 public:
  FloatLatticeCell() : value_(0.0f) {};
  FloatLatticeCell(bool isTop, bool isBottom, float value)
    : value_(value) { this->isTop_ = isTop; this->isBottom_ =  isBottom; };
  virtual ~FloatLatticeCell() {};

  float getValue() { return value_; };
  void setValue(float value) { this->value_ = value; };

  virtual bool isIntLattice() { return false; };
  virtual bool isLongLattice() { return false; };
  virtual bool isFloatLattice() { return true; };
  virtual bool isDoubleLattice() { return false; };
  virtual bool isBooleanLattice() { return false; };
  virtual LatticeCell * copy() { return new FloatLatticeCell(isTop_, isBottom_, value_); };
};

class DoubleLatticeCell : public LatticeCell
{
 protected:
  double value_;

 public:
  DoubleLatticeCell() : value_(0.0f) {};
  DoubleLatticeCell(bool isTop, bool isBottom, double value)
    : value_(value) { this->isTop_ = isTop; this->isBottom_ =  isBottom; };
  virtual ~DoubleLatticeCell() {};

  double getValue() { return value_; };
  void setValue(double value) { this->value_ = value; };

  virtual bool isIntLattice() { return false; };
  virtual bool isLongLattice() { return false; };
  virtual bool isFloatLattice() { return false; };
  virtual bool isDoubleLattice() { return true; };
  virtual bool isBooleanLattice() { return false; };
  virtual LatticeCell * copy() { return new DoubleLatticeCell(isTop_, isBottom_, value_); };
};

class BooleanLatticeCell : public LatticeCell
{
 protected:
  bool value_;

 public:
  BooleanLatticeCell() : value_(false) {};
  BooleanLatticeCell(bool isTop, bool isBottom, bool value)
    : value_(value) { this->isTop_ = isTop; this->isBottom_ =  isBottom; };
  virtual ~BooleanLatticeCell() {};

  bool getValue() { return value_; };
  void setValue(bool value) { this->value_ = value; };

  virtual bool isIntLattice() { return false; };
  virtual bool isLongLattice() { return false; };
  virtual bool isFloatLattice() { return false; };
  virtual bool isDoubleLattice() { return false; };
  virtual bool isBooleanLattice() { return true; };
  virtual LatticeCell * copy() { return new BooleanLatticeCell(isTop_, isBottom_, value_); };
};
}
