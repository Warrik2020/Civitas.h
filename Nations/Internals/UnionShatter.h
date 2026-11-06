#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Internals
{
    class UnionShatter : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit UnionShatter(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Internals", "UnionShatter") {}
    public:
        int EstimateStates(int tileCount, void* cfg) const { void* __callArgs[] = { &tileCount, cfg }; return CallStaticValue<int>("EstimateStates", __callArgs, 2); }
        int EstimateStates(int tileCount, float tilesPerState, int maxStates) const { void* __callArgs[] = { &tileCount, &tilesPerState, &maxStates }; return CallStaticValue<int>("EstimateStates", __callArgs, 3); }
        void FormUnionOfStates(int rulerId, int otherId, void* mgr, void* ctx) const { void* __callArgs[] = { &rulerId, &otherId, mgr, &ctx }; CallStatic("FormUnionOfStates", __callArgs, 4); }
        int JoinUnionOfStates(void* union_, int joinerId, void* mgr, void* ctx) const { void* __callArgs[] = { union_, &joinerId, mgr, &ctx }; return CallStaticValue<int>("JoinUnionOfStates", __callArgs, 4); }
        void Shatter(int parentId, void* mgr, void* ctx, void* result) const { void* __callArgs[] = { &parentId, mgr, &ctx, result }; CallStatic("Shatter", __callArgs, 4); }
    };
}
