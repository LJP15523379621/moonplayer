#ifndef SIMUPARSERBRIDGE_H
#define SIMUPARSERBRIDGE_H

#include "parserbridge.h"
#include <Python.h>
class SimuParser;

class SimuParserBridge : public ParserBridge
{
    Q_OBJECT
public:
    SimuParserBridge(QObject *parent = 0);
    void initParser(void);
    void onParseFinished(PyObject *dict);

protected:
    void runParser(const QString &url);

private:
    SimuParser *parser;
};

extern SimuParserBridge simuParserBridge;

#endif // SIMUPARSERBRIDGE_H
