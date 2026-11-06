#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../CivitasCore.h"

namespace CivitasPoly::Nations
{
    class ControlLapseRenderer : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit ControlLapseRenderer(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations", "ControlLapseRenderer") {}
    public:
        void SetVisible(bool visible) const { void* __callArgs[] = { &visible }; Call("SetVisible", __callArgs, 1); }
        void SetFade(float alpha) const { void* __callArgs[] = { &alpha }; Call("SetFade", __callArgs, 1); }
        void Sync() const { Call("Sync", nullptr, 0); }
        void Destroy() const { Call("Destroy", nullptr, 0); }
        float hatchDarken() const { return ReadField<float>("hatchDarken"); }
        void hatchDarken(float value) const { WriteField<float>("hatchDarken", value); }
        float hatchAlpha() const { return ReadField<float>("hatchAlpha"); }
        void hatchAlpha(float value) const { WriteField<float>("hatchAlpha", value); }
        float outlineDarken() const { return ReadField<float>("outlineDarken"); }
        void outlineDarken(float value) const { WriteField<float>("outlineDarken", value); }
        float outlineAlpha() const { return ReadField<float>("outlineAlpha"); }
        void outlineAlpha(float value) const { WriteField<float>("outlineAlpha", value); }
        void* dusk() const { return ReadField<void*>("dusk"); }
        void dusk(void* value) const { WriteField<void*>("dusk", value); }
    };
}
