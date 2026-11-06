#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Labels
{
    class NationLabelSystem : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit NationLabelSystem(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Labels", "NationLabelSystem") {}
    public:
        void* NameInk(void* fill, void* cfg) const { void* __callArgs[] = { fill, cfg }; return CallStatic("NameInk", __callArgs, 2); }
        void* NameInk(void* fill, float minBrightness, float minContrast) const { void* __callArgs[] = { fill, &minBrightness, &minContrast }; return CallStatic("NameInk", __callArgs, 3); }
        float Luminance(void* c) const { void* __callArgs[] = { c }; return CallStaticValue<float>("Luminance", __callArgs, 1); }
        void ApplyNameInk(void* mat, void* cfg, void* outlineColor) const { void* __callArgs[] = { mat, cfg, outlineColor }; CallStatic("ApplyNameInk", __callArgs, 3); }
        void SetVisible(bool visible) const { void* __callArgs[] = { &visible }; Call("SetVisible", __callArgs, 1); }
        void SetModeSuppressed(bool suppressed) const { void* __callArgs[] = { &suppressed }; Call("SetModeSuppressed", __callArgs, 1); }
        float CloseZoomAlpha(float tilePx, float fadeStartTilePx, float hideTilePx) const { void* __callArgs[] = { &tilePx, &fadeStartTilePx, &hideTilePx }; return CallStaticValue<float>("CloseZoomAlpha", __callArgs, 3); }
        float MaxNameContrast() const { return ReadStaticField<float>("MaxNameContrast"); }
    };
}
