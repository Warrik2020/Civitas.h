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
        void NoteState(int stateId, float power) const { void* __callArgs[] = { &stateId, &power }; CallStatic("NoteState", __callArgs, 2); }
        void ClearDepots() const { CallStatic("ClearDepots", nullptr, 0); }
        float DepotPowerIn(int stateId) const { void* __callArgs[] = { &stateId }; return CallStaticValue<float>("DepotPowerIn", __callArgs, 1); }
        float DepotOutput(float power, float techMul) const { void* __callArgs[] = { &power, &techMul }; return CallStaticValue<float>("DepotOutput", __callArgs, 2); }
        void AddDepots(int nationId, float techMul, void* grid, void* cells, void* cities, void* into) const { void* __callArgs[] = { &nationId, &techMul, grid, cells, cities, into }; CallStatic("AddDepots", __callArgs, 6); }
        int AnchorTile(int stateId, void* grid) const { void* __callArgs[] = { &stateId, grid }; return CallStaticValue<int>("AnchorTile", __callArgs, 2); }
    };
}
