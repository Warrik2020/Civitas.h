#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Military
{
    class LogisticsSources : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit LogisticsSources(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Military", "LogisticsSources") {}
    public:
        void NoteState(int stateId, float power) const { void* args[] = { &stateId, &power }; CallStatic("NoteState", args, 2); }
        void ClearDepots() const { CallStatic("ClearDepots", nullptr, 0); }
        float DepotPowerIn(int stateId) const { void* args[] = { &stateId }; return CallStaticValue<float>("DepotPowerIn", args, 1); }
        float DepotOutput(float power, float techMul) const { void* args[] = { &power, &techMul }; return CallStaticValue<float>("DepotOutput", args, 2); }
        void AddDepots(int nationId, float techMul, void* grid, void* cells, void* cities, void* into) const { void* args[] = { &nationId, &techMul, grid, cells, cities, into }; CallStatic("AddDepots", args, 6); }
        int AnchorTile(int stateId, void* grid) const { void* args[] = { &stateId, grid }; return CallStaticValue<int>("AnchorTile", args, 2); }
    };
}
