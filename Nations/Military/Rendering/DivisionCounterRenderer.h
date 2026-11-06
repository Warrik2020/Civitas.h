#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../../CivitasCore.h"

namespace CivitasPoly::Nations::Military::Rendering
{
    class DivisionCounterRenderer : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit DivisionCounterRenderer(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Military.Rendering", "DivisionCounterRenderer") {}
    public:
        bool MegaCounterAt(int nationId, void* world, float slackWorld, void* center) const { void* __callArgs[] = { &nationId, world, &slackWorld, &center }; return CallStaticValue<bool>("MegaCounterAt", __callArgs, 4); }
        void* FrameHalfExtents(void* cfg, float radius, float& drop) const { void* __callArgs[] = { cfg, &radius, &drop }; return CallStatic("FrameHalfExtents", __callArgs, 3); }
        float FrameFoot(void* cfg, float radius) const { void* __callArgs[] = { cfg, &radius }; return CallStaticValue<float>("FrameFoot", __callArgs, 2); }
        float DrawnRadiusTiles(void* cfg, float body) const { void* __callArgs[] = { cfg, &body }; return CallStaticValue<float>("DrawnRadiusTiles", __callArgs, 2); }
        void Sync(void* militaries, void* nationOf, void* cam, int tick, int playerNationId, bool smoothing) const { void* __callArgs[] = { militaries, nationOf, cam, &tick, &playerNationId, &smoothing }; Call("Sync", __callArgs, 6); }
        void SetIconStyle(bool on) const { void* __callArgs[] = { &on }; Call("SetIconStyle", __callArgs, 1); }
        void SetFlagStyle(bool on) const { void* __callArgs[] = { &on }; Call("SetFlagStyle", __callArgs, 1); }
        void InvalidateOwnership() const { Call("InvalidateOwnership", nullptr, 0); }
        void InvalidateMerge() const { Call("InvalidateMerge", nullptr, 0); }
        void NoteSpawn() const { Call("NoteSpawn", nullptr, 0); }
        void SetVisible(bool visible) const { void* __callArgs[] = { &visible }; Call("SetVisible", __callArgs, 1); }
        void Destroy() const { Call("Destroy", nullptr, 0); }
        bool Standards() const { return ReadStaticField<bool>("Standards"); }
        void Standards(bool value) const { WriteStaticField<bool>("Standards", value); }
        bool Shadows() const { return ReadStaticField<bool>("Shadows"); }
        void Shadows(bool value) const { WriteStaticField<bool>("Shadows", value); }
    };
}
