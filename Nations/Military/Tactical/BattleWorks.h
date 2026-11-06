#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../../CivitasCore.h"

namespace CivitasPoly::Nations::Military::Tactical
{
    class BattleWorks : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit BattleWorks(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Military.Tactical", "BattleWorks") {}
    public:
        bool Any(void* bounds) const { void* __callArgs[] = { &bounds }; return CallStaticValue<bool>("Any", __callArgs, 1); }
        uint8_t CoverAt(void* v, void* p) const { void* __callArgs[] = { &v, p }; return CallStaticValue<uint8_t>("CoverAt", __callArgs, 2); }
        float Score(void* v, void* p) const { void* __callArgs[] = { &v, p }; return CallStaticValue<float>("Score", __callArgs, 2); }
        uint8_t Nearest(void* v, void* p, float radius, void* at) const { void* __callArgs[] = { &v, p, &radius, &at }; return CallStaticValue<uint8_t>("Nearest", __callArgs, 4); }
        float WorksExposureMul() const { return ReadStaticField<float>("WorksExposureMul"); }
        float WorksMovingShare() const { return ReadStaticField<float>("WorksMovingShare"); }
        float SlackMetres() const { return ReadStaticField<float>("SlackMetres"); }
        int CoverStride() const { return ReadStaticField<int>("CoverStride"); }
        float HoldLeashTiles() const { return ReadStaticField<float>("HoldLeashTiles"); }
    };
}
