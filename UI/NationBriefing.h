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
        void Neighbours(void* n, void* nations, void* internals, void* into, int max) const { void* args[] = { n, nations, internals, into, &max }; CallStatic("Neighbours", args, 5); }
        int NeighbourCount(int nationId, void* internals) const { void* args[] = { &nationId, internals }; return CallStaticValue<int>("NeighbourCount", args, 2); }
        int Allies(int nationId, void* internals) const { void* args[] = { &nationId, internals }; return CallStaticValue<int>("Allies", args, 2); }
        void* WarNames(void* nations, void* ids) const { void* args[] = { nations, ids }; return CallStatic("WarNames", args, 2); }
        int StatesHeld(int nationId, void* grid) const { void* args[] = { &nationId, grid }; return CallStaticValue<int>("StatesHeld", args, 2); }
        void* nation() const { return ReadField<void*>("nation"); }
        void SetNation(void* value) const { WriteField<void*>("nation", value); }
        void* word() const { return ReadField<void*>("word"); }
        void SetWord(void* value) const { WriteField<void*>("word", value); }
        void* color() const { return ReadField<void*>("color"); }
        void SetColor(void* value) const { WriteField<void*>("color", value); }
    };
}
