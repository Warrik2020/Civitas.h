#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../../CivitasCore.h"

namespace CivitasPoly::Nations::Military::Command
{
    class ConnectivityScheduler : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit ConnectivityScheduler(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Military.Command", "ConnectivityScheduler") {}
    public:
        void Pick(void* mils, void* getNation, int tick, int backstopTicks, void* into) const { void* args[] = { mils, getNation, &tick, &backstopTicks, into }; Call("Pick", args, 5); }
        int64_t Score(void* mil, void* n, int tick, int backstopTicks) const { void* args[] = { mil, n, &tick, &backstopTicks }; return CallStaticValue<int64_t>("Score", args, 4); }
        int64_t CostOf(void* n, bool collect) const { void* args[] = { n, &collect }; return CallStaticValue<int64_t>("CostOf", args, 2); }
        void AfterFlood(void* mil, void* n, void* grid, void* conn, int tick, bool blockActive = false, int capState = -1) const { void* args[] = { mil, n, grid, conn, &tick, &blockActive, &capState }; Call("AfterFlood", args, 7); }
        void RestampAtWar(void* mils, void* conn, void* grid, int tick) const { void* args[] = { mils, conn, grid, &tick }; CallStatic("RestampAtWar", args, 4); }
        void StampAll(void* mil, void* conn, void* grid, int tick, bool blockActive, int capState) const { void* args[] = { mil, conn, grid, &tick, &blockActive, &capState }; CallStatic("StampAll", args, 6); }
        void Stamp(void* d, void* conn, int version, int tick, bool lockBlocked) const { void* args[] = { d, conn, &version, &tick, &lockBlocked }; CallStatic("Stamp", args, 5); }
        int KindOf(int nationId, int comp) const { void* args[] = { &nationId, &comp }; return CallValue<int>("KindOf", args, 2); }
        bool PrepareCede(void* mil, void* conn) const { void* args[] = { mil, conn }; return CallValue<bool>("PrepareCede", args, 2); }
        int CedeWinner(void* mil, void* n, void* grid, void* conn, int ord, int tick) const { void* args[] = { mil, n, grid, conn, &ord, &tick }; return CallValue<int>("CedeWinner", args, 6); }
        int MaxFloodsPerTick() const { return ReadStaticField<int>("MaxFloodsPerTick"); }
        int64_t WorkBudgetPerTick() const { return ReadStaticField<int64_t>("WorkBudgetPerTick"); }
        int PocketRecheckTicks() const { return ReadStaticField<int>("PocketRecheckTicks"); }
    };
}
