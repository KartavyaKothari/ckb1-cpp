// Single inheritance
class A{};
class B: public A{};

// Hierarchial inheritance
class A{};
class B: public A{};
class C: public A{};

// Multiple inheritance
class A{};
class B{};
class C: public A, public B{};

// Multilevel inheritance
class A{};
class B: public A{};
class C: public B{};

// Hybrid inheritance
class A{};
class B: public A{};
class C: public A{};
class D: public C, public B{};

