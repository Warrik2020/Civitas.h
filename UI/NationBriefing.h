#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../CivitasCore.h"

namespace CivitasPoly::UI
{
    class NationBriefing : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit NationBriefing(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.UI", "NationBriefing") {}
    public:
        void Neighbours(void* n, void* nations, void* internals, void* into, int max_) const { void* __callArgs[] = { n, nations, internals, into, &max_ }; CallStatic("Neighbours", __callArgs, 5); }
        int NeighbourCount(int nationId, void* internals) const { void* __callArgs[] = { &nationId, internals }; return CallStaticValue<int>("NeighbourCount", __callArgs, 2); }
        int Allies(int nationId, void* internals) const { void* __callArgs[] = { &nationId, internals }; return CallStaticValue<int>("Allies", __callArgs, 2); }
        void* WarNames(void* nations, void* ids) const { void* __callArgs[] = { nations, ids }; return CallStatic("WarNames", __callArgs, 2); }
        int StatesHeld(int nationId, void* grid) const { void* __callArgs[] = { &nationId, grid }; return CallStaticValue<int>("StatesHeld", __callArgs, 2); }
    };
}
