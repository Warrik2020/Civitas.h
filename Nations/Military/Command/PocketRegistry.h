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
        void* Find(int id) const { void* args[] = { &id }; return CallStatic("Find", args, 1); }
        bool AnyOf(int nationId) const { void* args[] = { &nationId }; return CallStaticValue<bool>("AnyOf", args, 1); }
        void* ForOrdinal(int nationId, int version, int ord) const { void* args[] = { &nationId, &version, &ord }; return CallStatic("ForOrdinal", args, 3); }
        float StockOf(void* p) const { void* args[] = { p }; return CallStaticValue<float>("StockOf", args, 1); }
        bool CedeWaitOver(void* p, int tick) const { void* args[] = { p, &tick }; return CallStaticValue<bool>("CedeWaitOver", args, 2); }
        void Sync(void* grid) const { void* args[] = { grid }; CallStatic("Sync", args, 1); }
        void Clear() const { CallStatic("Clear", nullptr, 0); }
        void DropNation(int nationId) const { void* args[] = { &nationId }; CallStatic("DropNation", args, 1); }
        void NoteFlood(void* mil, void* n, void* grid, void* conn, int version, int tick) const { void* args[] = { mil, n, grid, conn, &version, &tick }; CallStatic("NoteFlood", args, 6); }
        void Prune(void* getNation) const { void* args[] = { getNation }; CallStatic("Prune", args, 1); }
        int MaxProbes() const { return ReadStaticField<int>("MaxProbes"); }
        int CedeWaitTicks() const { return ReadStaticField<int>("CedeWaitTicks"); }
    };
}
