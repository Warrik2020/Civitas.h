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
        void* Get(int id) const { void* args[] = { &id }; return CallStatic("Get", args, 1); }
        void* Of(void* d) const { void* args[] = { d }; return CallStatic("Of", args, 1); }
        void Clear() const { CallStatic("Clear", nullptr, 0); }
        void ClearDivisions(void* militaries) const { void* args[] = { militaries }; CallStatic("ClearDivisions", args, 1); }
        bool WantsAttack(void* d, void* mil, void* grid) const { void* args[] = { d, mil, grid }; return CallStaticValue<bool>("WantsAttack", args, 3); }
        bool Targetable(void* e) const { void* args[] = { e }; return CallStaticValue<bool>("Targetable", args, 1); }
        float EngageRange(void* d, void* e) const { void* args[] = { d, e }; return CallStaticValue<float>("EngageRange", args, 2); }
        float FrontageRoom(void* e, void* buckets, void* cfg, int tick) const { void* args[] = { e, buckets, cfg, &tick }; return CallStaticValue<float>("FrontageRoom", args, 4); }
        void NotePending(void* e, float width, int tick) const { void* args[] = { e, &width, &tick }; CallStatic("NotePending", args, 3); }
        bool SameBattle(void* d, void* e) const { void* args[] = { d, e }; return CallStaticValue<bool>("SameBattle", args, 2); }
        void Build(void* militaries, void* byId, void* buckets, void* grid, void* cfg, int tick, void* milById = nullptr) const { void* args[] = { militaries, byId, buckets, grid, cfg, &tick, milById }; CallStatic("Build", args, 7); }
        int Compare(int a, int b) const { void* args[] = { &a, &b }; return CallValue<int>("Compare", args, 2); }
        bool FrontageOn() const { return ReadStaticField<bool>("FrontageOn"); }
        void SetFrontageOn(bool value) const { WriteStaticField<bool>("FrontageOn", value); }
    };
}
