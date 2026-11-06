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
        void* TakeSlice(void* field, int tile, float people) const { void* args[] = { field, &tile, &people }; return CallStatic("TakeSlice", args, 3); }
        void* TakeNamed(void* field, int tile, int origin, void* named) const { void* args[] = { field, &tile, &origin, named }; return CallStatic("TakeNamed", args, 4); }
        float Deposit(void* field, int tile, void* pk, float amount) const { void* args[] = { field, &tile, &pk, &amount }; return CallStaticValue<float>("Deposit", args, 4); }
        float Shift(void* field, int from, int to, float amount) const { void* args[] = { field, &from, &to, &amount }; return CallStaticValue<float>("Shift", args, 4); }
        void ClearIdentity(int tile) const { void* args[] = { &tile }; CallStatic("ClearIdentity", args, 1); }
        void* OwnPeople(int nation, float people) const { void* args[] = { &nation, &people }; return CallStatic("OwnPeople", args, 2); }
    };
}
