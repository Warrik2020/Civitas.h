#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../CivitasCore.h"

namespace CivitasPoly::UI
{
    class PortraitImage : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit PortraitImage(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.UI", "PortraitImage") {}
    public:
        void* Coverage(void* loops, int w, int h) const { void* args[] = { loops, &w, &h }; return CallStatic("Coverage", args, 3); }
        void* DistanceOutside(void* cov, int w, int h) const { void* args[] = { cov, &w, &h }; return CallStatic("DistanceOutside", args, 3); }
        void* Compose(void* cov, void* fill, void* dist, int w, int h, void* glow) const { void* args[] = { cov, fill, dist, &w, &h, glow }; return CallStatic("Compose", args, 6); }
        float SignedArea(void* p) const { void* args[] = { p }; return CallStaticValue<float>("SignedArea", args, 1); }
        bool on() const { return ReadField<bool>("on"); }
        void SetOn(bool value) const { WriteField<bool>("on", value); }
        uint8_t r() const { return ReadField<uint8_t>("r"); }
        void SetR(uint8_t value) const { WriteField<uint8_t>("r", value); }
        uint8_t g() const { return ReadField<uint8_t>("g"); }
        void SetG(uint8_t value) const { WriteField<uint8_t>("g", value); }
        uint8_t b() const { return ReadField<uint8_t>("b"); }
        void SetB(uint8_t value) const { WriteField<uint8_t>("b", value); }
        float lineWidth() const { return ReadField<float>("lineWidth"); }
        void SetLineWidth(float value) const { WriteField<float>("lineWidth", value); }
        float reach() const { return ReadField<float>("reach"); }
        void SetReach(float value) const { WriteField<float>("reach", value); }
        float haloAlpha() const { return ReadField<float>("haloAlpha"); }
        void SetHaloAlpha(float value) const { WriteField<float>("haloAlpha", value); }
    };
}
