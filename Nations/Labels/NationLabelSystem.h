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
        void* NameInk(void* fill, void* cfg) const { void* args[] = { fill, cfg }; return CallStatic("NameInk", args, 2); }
        void* NameInk(void* fill, float minBrightness, float minContrast) const { void* args[] = { fill, &minBrightness, &minContrast }; return CallStatic("NameInk", args, 3); }
        float Luminance(void* c) const { void* args[] = { c }; return CallStaticValue<float>("Luminance", args, 1); }
        void ApplyNameInk(void* mat, void* cfg, void* outlineColor) const { void* args[] = { mat, cfg, outlineColor }; CallStatic("ApplyNameInk", args, 3); }
        void SetVisible(bool visible) const { void* args[] = { &visible }; Call("SetVisible", args, 1); }
        void SetModeSuppressed(bool suppressed) const { void* args[] = { &suppressed }; Call("SetModeSuppressed", args, 1); }
        float CloseZoomAlpha(float tilePx, float fadeStartTilePx, float hideTilePx) const { void* args[] = { &tilePx, &fadeStartTilePx, &hideTilePx }; return CallStaticValue<float>("CloseZoomAlpha", args, 3); }
        float MaxNameContrast() const { return ReadStaticField<float>("MaxNameContrast"); }
    };
}
