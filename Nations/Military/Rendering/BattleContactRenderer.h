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
        void SetVisible(bool visible) const { void* args[] = { &visible }; Call("SetVisible", args, 1); }
        void Sync(void* militaries, void* cam, int tick, float dt) const { void* args[] = { militaries, cam, &tick, &dt }; Call("Sync", args, 4); }
        void* IconTilePos(void* b) const { void* args[] = { b }; return CallStatic("IconTilePos", args, 1); }
        float IconAlpha(float tilePx, bool wasShown) const { void* args[] = { &tilePx, &wasShown }; return CallStaticValue<float>("IconAlpha", args, 2); }
        int ViewerSide(void* b, int viewer) const { void* args[] = { b, &viewer }; return CallStaticValue<int>("ViewerSide", args, 2); }
        float IconUnit(float ppwu, float tileScale) const { void* args[] = { &ppwu, &tileScale }; return CallStaticValue<float>("IconUnit", args, 2); }
        bool IconOnScreen(void* b, void* cam, void* space, void* centre, float& radiusPx) const { void* args[] = { b, cam, space, &centre, &radiusPx }; return CallStaticValue<bool>("IconOnScreen", args, 5); }
        float SuppressPulse() const { return ReadField<float>("SuppressPulse"); }
        void SetSuppressPulse(float value) const { WriteField<float>("SuppressPulse", value); }
        int ViewerNationId() const { return ReadField<int>("ViewerNationId"); }
        void SetViewerNationId(int value) const { WriteField<int>("ViewerNationId", value); }
        bool used() const { return ReadField<bool>("used"); }
        void SetUsed(bool value) const { WriteField<bool>("used", value); }
        int aId() const { return ReadField<int>("aId"); }
        void SetAId(int value) const { WriteField<int>("aId", value); }
        int bId() const { return ReadField<int>("bId"); }
        void SetBId(int value) const { WriteField<int>("bId", value); }
        float tilt() const { return ReadField<float>("tilt"); }
        void SetTilt(float value) const { WriteField<float>("tilt", value); }
        float tiltTarget() const { return ReadField<float>("tiltTarget"); }
        void SetTiltTarget(float value) const { WriteField<float>("tiltTarget", value); }
        bool tiltValid() const { return ReadField<bool>("tiltValid"); }
        void SetTiltValid(bool value) const { WriteField<bool>("tiltValid", value); }
        int lastSeenFrame() const { return ReadField<int>("lastSeenFrame"); }
        void SetLastSeenFrame(int value) const { WriteField<int>("lastSeenFrame", value); }
    };
}
