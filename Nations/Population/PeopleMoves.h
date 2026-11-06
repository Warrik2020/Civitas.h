#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Population
{
    class PeopleMoves : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit PeopleMoves(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Population", "PeopleMoves") {}
    public:
        void* TakeSlice(void* field, int tile, float people) const { void* __callArgs[] = { field, &tile, &people }; return CallStatic("TakeSlice", __callArgs, 3); }
        void* TakeNamed(void* field, int tile, int origin, void* named) const { void* __callArgs[] = { field, &tile, &origin, named }; return CallStatic("TakeNamed", __callArgs, 4); }
        float Deposit(void* field, int tile, void* pk, float amount) const { void* __callArgs[] = { field, &tile, &pk, &amount }; return CallStaticValue<float>("Deposit", __callArgs, 4); }
        float Shift(void* field, int from, int to, float amount) const { void* __callArgs[] = { field, &from, &to, &amount }; return CallStaticValue<float>("Shift", __callArgs, 4); }
        void ClearIdentity(int tile) const { void* __callArgs[] = { &tile }; CallStatic("ClearIdentity", __callArgs, 1); }
        void* OwnPeople(int nation, float people) const { void* __callArgs[] = { &nation, &people }; return CallStatic("OwnPeople", __callArgs, 2); }
    };
}
