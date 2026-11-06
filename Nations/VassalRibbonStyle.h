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
        void* ColorFor(void* overlord) const { void* __callArgs[] = { overlord }; return Call("ColorFor", __callArgs, 1); }
        int Version() const { return CallValue<int>("Version", nullptr, 0); }
        bool enabled() const { return ReadField<bool>("enabled"); }
        void enabled(bool value) const { WriteField<bool>("enabled", value); }
        float widthPx() const { return ReadField<float>("widthPx"); }
        void widthPx(float value) const { WriteField<float>("widthPx", value); }
        float alpha() const { return ReadField<float>("alpha"); }
        void alpha(float value) const { WriteField<float>("alpha", value); }
        float darken() const { return ReadField<float>("darken"); }
        void darken(float value) const { WriteField<float>("darken", value); }
        float featherPx() const { return ReadField<float>("featherPx"); }
        void featherPx(float value) const { WriteField<float>("featherPx", value); }
    };
}
