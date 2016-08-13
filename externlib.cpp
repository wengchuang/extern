#include "externlib.h"


#include "simplealgo.h"


static T_LibInfo infos;

int libInit()
{


    IAlgorithm* algoImp = new SimpleAlgo("Extern SimpleAlgo");
    infos.algosList.append(algoImp);




    return 0;
}
const PT_LibInfo getLibInfos()
{
    return &infos;
}

#if 0
ExternLib::ExternLib()
{
}
#endif
