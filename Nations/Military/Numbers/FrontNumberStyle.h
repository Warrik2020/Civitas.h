#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../../CivitasCore.h"

namespace CivitasPoly::Nations::Military::Numbers
{
    class FrontNumberStyle : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit FrontNumberStyle(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Military.Numbers", "FrontNumberStyle") {}
    public:
        void* MaterialFor(void* nation) const { void* args[] = { nation }; return Call("MaterialFor", args, 1); }
        void DestroyMaterials() const { Call("DestroyMaterials", nullptr, 0); }
        float OutlineWidth(float ringShare, float pointSize, int padding) const { void* args[] = { &ringShare, &pointSize, &padding }; return CallStaticValue<float>("OutlineWidth", args, 3); }
        void* Fill(void* nation) const { void* args[] = { nation }; return Call("Fill", args, 1); }
        void* Outline(void* nation) const { void* args[] = { nation }; return Call("Outline", args, 1); }
        float EmTiles(float lengthTiles, float widthEm, float kmPerTile) const { void* args[] = { &lengthTiles, &widthEm, &kmPerTile }; return CallValue<float>("EmTiles", args, 3); }
        float ScreenAlpha(float emPx) const { void* args[] = { &emPx }; return CallValue<float>("ScreenAlpha", args, 1); }
        int Format(int men, void* buf) const { void* args[] = { &men, buf }; return CallStaticValue<int>("Format", args, 2); }
        float maxEmKm() const { return ReadField<float>("maxEmKm"); }
        void SetMaxEmKm(float value) const { WriteField<float>("maxEmKm", value); }
        float minEmKm() const { return ReadField<float>("minEmKm"); }
        void SetMinEmKm(float value) const { WriteField<float>("minEmKm", value); }
        float fitShare() const { return ReadField<float>("fitShare"); }
        void SetFitShare(float value) const { WriteField<float>("fitShare", value); }
        float ringEm() const { return ReadField<float>("ringEm"); }
        void SetRingEm(float value) const { WriteField<float>("ringEm", value); }
        float fillTint() const { return ReadField<float>("fillTint"); }
        void SetFillTint(float value) const { WriteField<float>("fillTint", value); }
        float minOutlineContrast() const { return ReadField<float>("minOutlineContrast"); }
        void SetMinOutlineContrast(float value) const { WriteField<float>("minOutlineContrast", value); }
        float hidePx() const { return ReadField<float>("hidePx"); }
        void SetHidePx(float value) const { WriteField<float>("hidePx", value); }
        float fullPx() const { return ReadField<float>("fullPx"); }
        void SetFullPx(float value) const { WriteField<float>("fullPx", value); }
        float fadePx() const { return ReadField<float>("fadePx"); }
        void SetFadePx(float value) const { WriteField<float>("fadePx", value); }
        float gonePx() const { return ReadField<float>("gonePx"); }
        void SetGonePx(float value) const { WriteField<float>("gonePx", value); }
        float opacity() const { return ReadField<float>("opacity"); }
        void SetOpacity(float value) const { WriteField<float>("opacity", value); }
        void* Glyphs() const { return ReadStaticField<void*>("Glyphs"); }
    };
}
