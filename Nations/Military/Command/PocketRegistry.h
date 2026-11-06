#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../../CivitasCore.h"

namespace CivitasPoly::Nations::Military::Command
{
    class PocketRegistry : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit PocketRegistry(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Military.Command", "PocketRegistry") {}
    public:
        void* Find(int id) const { void* __callArgs[] = { &id }; return CallStatic("Find", __callArgs, 1); }
        bool AnyOf(int nationId) const { void* __callArgs[] = { &nationId }; return CallStaticValue<bool>("AnyOf", __callArgs, 1); }
        void* ForOrdinal(int nationId, int version, int ord) const { void* __callArgs[] = { &nationId, &version, &ord }; return CallStatic("ForOrdinal", __callArgs, 3); }
        float StockOf(void* p) const { void* __callArgs[] = { p }; return CallStaticValue<float>("StockOf", __callArgs, 1); }
        bool CedeWaitOver(void* p, int tick) const { void* __callArgs[] = { p, &tick }; return CallStaticValue<bool>("CedeWaitOver", __callArgs, 2); }
        void Sync(void* grid) const { void* __callArgs[] = { grid }; CallStatic("Sync", __callArgs, 1); }
        void Clear() const { CallStatic("Clear", nullptr, 0); }
        void DropNation(int nationId) const { void* __callArgs[] = { &nationId }; CallStatic("DropNation", __callArgs, 1); }
        void NoteFlood(void* mil, void* n, void* grid, void* conn, int version, int tick) const { void* __callArgs[] = { mil, n, grid, conn, &version, &tick }; CallStatic("NoteFlood", __callArgs, 6); }
        void Prune(void* getNation) const { void* __callArgs[] = { getNation }; CallStatic("Prune", __callArgs, 1); }
        int MaxProbes() const { return ReadStaticField<int>("MaxProbes"); }
        int CedeWaitTicks() const { return ReadStaticField<int>("CedeWaitTicks"); }
    };
}
