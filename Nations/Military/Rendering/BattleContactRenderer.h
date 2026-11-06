#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../../CivitasCore.h"

namespace CivitasPoly::Nations::Military::Rendering
{
    class BattleContactRenderer : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit BattleContactRenderer(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Military.Rendering", "BattleContactRenderer") {}
    public:
        void Dispose() const { Call("Dispose", nullptr, 0); }
        void SetVisible(bool visible) const { void* __callArgs[] = { &visible }; Call("SetVisible", __callArgs, 1); }
        void Sync(void* militaries, void* cam, int tick, float dt) const { void* __callArgs[] = { militaries, cam, &tick, &dt }; Call("Sync", __callArgs, 4); }
        void* IconTilePos(void* b) const { void* __callArgs[] = { b }; return CallStatic("IconTilePos", __callArgs, 1); }
        float IconAlpha(float tilePx, bool wasShown) const { void* __callArgs[] = { &tilePx, &wasShown }; return CallStaticValue<float>("IconAlpha", __callArgs, 2); }
        int ViewerSide(void* b, int viewer) const { void* __callArgs[] = { b, &viewer }; return CallStaticValue<int>("ViewerSide", __callArgs, 2); }
        float IconUnit(float ppwu, float tileScale) const { void* __callArgs[] = { &ppwu, &tileScale }; return CallStaticValue<float>("IconUnit", __callArgs, 2); }
        bool IconOnScreen(void* b, void* cam, void* space, void* centre, float& radiusPx) const { void* __callArgs[] = { b, cam, space, &centre, &radiusPx }; return CallStaticValue<bool>("IconOnScreen", __callArgs, 5); }
        float SuppressPulse() const { return ReadField<float>("SuppressPulse"); }
        void SuppressPulse(float value) const { WriteField<float>("SuppressPulse", value); }
        int ViewerNationId() const { return ReadField<int>("ViewerNationId"); }
        void ViewerNationId(int value) const { WriteField<int>("ViewerNationId", value); }
    };
}
