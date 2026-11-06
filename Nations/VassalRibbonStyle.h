#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../CivitasCore.h"

namespace CivitasPoly::Nations
{
    class VassalRibbonStyle : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit VassalRibbonStyle(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations", "VassalRibbonStyle") {}
    public:
        void* ColorFor(void* overlord) const { void* args[] = { overlord }; return Call("ColorFor", args, 1); }
        int Version() const { return CallValue<int>("Version", nullptr, 0); }
        bool enabled() const { return ReadField<bool>("enabled"); }
        void SetEnabled(bool value) const { WriteField<bool>("enabled", value); }
        float widthPx() const { return ReadField<float>("widthPx"); }
        void SetWidthPx(float value) const { WriteField<float>("widthPx", value); }
        float alpha() const { return ReadField<float>("alpha"); }
        void SetAlpha(float value) const { WriteField<float>("alpha", value); }
        float darken() const { return ReadField<float>("darken"); }
        void SetDarken(float value) const { WriteField<float>("darken", value); }
        float featherPx() const { return ReadField<float>("featherPx"); }
        void SetFeatherPx(float value) const { WriteField<float>("featherPx", value); }
    };
}
