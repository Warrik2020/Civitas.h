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
        int EstimateStates(int tileCount, void* cfg) const { void* args[] = { &tileCount, cfg }; return CallStaticValue<int>("EstimateStates", args, 2); }
        int EstimateStates(int tileCount, float tilesPerState, int maxStates) const { void* args[] = { &tileCount, &tilesPerState, &maxStates }; return CallStaticValue<int>("EstimateStates", args, 3); }
        void FormUnionOfStates(int rulerId, int otherId, void* mgr, void* ctx) const { void* args[] = { &rulerId, &otherId, mgr, &ctx }; CallStatic("FormUnionOfStates", args, 4); }
        int JoinUnionOfStates(void* union_, int joinerId, void* mgr, void* ctx) const { void* args[] = { union_, &joinerId, mgr, &ctx }; return CallStaticValue<int>("JoinUnionOfStates", args, 4); }
        void Shatter(int parentId, void* mgr, void* ctx, void* result) const { void* args[] = { &parentId, mgr, &ctx, result }; CallStatic("Shatter", args, 4); }
    };
}
