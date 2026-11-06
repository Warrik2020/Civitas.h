#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../../CivitasCore.h"

namespace CivitasPoly::Map::Rendering::Styles
{
    class LabelBlock : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit LabelBlock(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Map.Rendering.Styles", "LabelBlock") {}
    public:
        void* textColor() const { return ReadField<void*>("textColor"); }
        void textColor(void* value) const { WriteField<void*>("textColor", value); }
        void* shadowColor() const { return ReadField<void*>("shadowColor"); }
        void shadowColor(void* value) const { WriteField<void*>("shadowColor", value); }
        int uppercase() const { return ReadField<int>("uppercase"); }
        void uppercase(int value) const { WriteField<int>("uppercase", value); }
        float trackingEm() const { return ReadField<float>("trackingEm"); }
        void trackingEm(float value) const { WriteField<float>("trackingEm", value); }
    };
}
