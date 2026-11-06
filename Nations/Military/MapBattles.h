#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Military
{
    class MapBattles : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit MapBattles(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Military", "MapBattles") {}
    public:
        void* Get(int id) const { void* __callArgs[] = { &id }; return CallStatic("Get", __callArgs, 1); }
        void* Of(void* d) const { void* __callArgs[] = { d }; return CallStatic("Of", __callArgs, 1); }
        void Clear() const { CallStatic("Clear", nullptr, 0); }
        void ClearDivisions(void* militaries) const { void* __callArgs[] = { militaries }; CallStatic("ClearDivisions", __callArgs, 1); }
        bool WantsAttack(void* d, void* mil, void* grid) const { void* __callArgs[] = { d, mil, grid }; return CallStaticValue<bool>("WantsAttack", __callArgs, 3); }
        bool Targetable(void* e) const { void* __callArgs[] = { e }; return CallStaticValue<bool>("Targetable", __callArgs, 1); }
        float EngageRange(void* d, void* e) const { void* __callArgs[] = { d, e }; return CallStaticValue<float>("EngageRange", __callArgs, 2); }
        float FrontageRoom(void* e, void* buckets, void* cfg, int tick) const { void* __callArgs[] = { e, buckets, cfg, &tick }; return CallStaticValue<float>("FrontageRoom", __callArgs, 4); }
        void NotePending(void* e, float width, int tick) const { void* __callArgs[] = { e, &width, &tick }; CallStatic("NotePending", __callArgs, 3); }
        bool SameBattle(void* d, void* e) const { void* __callArgs[] = { d, e }; return CallStaticValue<bool>("SameBattle", __callArgs, 2); }
        void Build(void* militaries, void* byId, void* buckets, void* grid, void* cfg, int tick, void* milById = nullptr) const { void* __callArgs[] = { militaries, byId, buckets, grid, cfg, &tick, milById }; CallStatic("Build", __callArgs, 7); }
        bool FrontageOn() const { return ReadStaticField<bool>("FrontageOn"); }
        void FrontageOn(bool value) const { WriteStaticField<bool>("FrontageOn", value); }
    };
}
