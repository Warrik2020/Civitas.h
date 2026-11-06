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
        void* MaterialFor(void* nation) const { void* __callArgs[] = { nation }; return Call("MaterialFor", __callArgs, 1); }
        void DestroyMaterials() const { Call("DestroyMaterials", nullptr, 0); }
        float OutlineWidth(float ringShare, float pointSize, int padding) const { void* __callArgs[] = { &ringShare, &pointSize, &padding }; return CallStaticValue<float>("OutlineWidth", __callArgs, 3); }
        void* Fill(void* nation) const { void* __callArgs[] = { nation }; return Call("Fill", __callArgs, 1); }
        void* Outline(void* nation) const { void* __callArgs[] = { nation }; return Call("Outline", __callArgs, 1); }
        float EmTiles(float lengthTiles, float widthEm, float kmPerTile) const { void* __callArgs[] = { &lengthTiles, &widthEm, &kmPerTile }; return CallValue<float>("EmTiles", __callArgs, 3); }
        float ScreenAlpha(float emPx) const { void* __callArgs[] = { &emPx }; return CallValue<float>("ScreenAlpha", __callArgs, 1); }
        int Format(int men, void* buf) const { void* __callArgs[] = { &men, buf }; return CallStaticValue<int>("Format", __callArgs, 2); }
        float maxEmKm() const { return ReadField<float>("maxEmKm"); }
        void maxEmKm(float value) const { WriteField<float>("maxEmKm", value); }
        float minEmKm() const { return ReadField<float>("minEmKm"); }
        void minEmKm(float value) const { WriteField<float>("minEmKm", value); }
        float fitShare() const { return ReadField<float>("fitShare"); }
        void fitShare(float value) const { WriteField<float>("fitShare", value); }
        float ringEm() const { return ReadField<float>("ringEm"); }
        void ringEm(float value) const { WriteField<float>("ringEm", value); }
        float fillTint() const { return ReadField<float>("fillTint"); }
        void fillTint(float value) const { WriteField<float>("fillTint", value); }
        float minOutlineContrast() const { return ReadField<float>("minOutlineContrast"); }
        void minOutlineContrast(float value) const { WriteField<float>("minOutlineContrast", value); }
        float hidePx() const { return ReadField<float>("hidePx"); }
        void hidePx(float value) const { WriteField<float>("hidePx", value); }
        float fullPx() const { return ReadField<float>("fullPx"); }
        void fullPx(float value) const { WriteField<float>("fullPx", value); }
        float fadePx() const { return ReadField<float>("fadePx"); }
        void fadePx(float value) const { WriteField<float>("fadePx", value); }
        float gonePx() const { return ReadField<float>("gonePx"); }
        void gonePx(float value) const { WriteField<float>("gonePx", value); }
        float opacity() const { return ReadField<float>("opacity"); }
        void opacity(float value) const { WriteField<float>("opacity", value); }
        void* Glyphs() const { return ReadStaticField<void*>("Glyphs"); }
    };
}
