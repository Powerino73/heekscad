// ConversionTools.h
#include "../interface/Tool.h"

extern bool ConvertLineArcsToWire2(const std::list<HeeksObj *> &list, TopoDS_Wire& wire);

class ConvertLineArcsToWire: public Tool
{
public:
	void Run();
	const char* GetTitle(){return "Convert Lines and/or Arcs To Wire";}
};

class ConvertWireToFace: public Tool
{
public:
	void Run();
	const char* GetTitle(){return "Convert Wire To Face";}
};

class ConvertEdgesToWire: public Tool
{
public:
	void Run();
	const char* GetTitle(){return "Convert Edges To Wire";}
};

class ConvertLineArcsToFace: public Tool
{
public:
	void Run();
	const char* GetTitle(){return "Convert Lines and/or Arcs To Face";}
};

void GetConversionMenuTools(std::list<Tool*>* t_list, const wxPoint* p, MarkedObject* marked_object);
