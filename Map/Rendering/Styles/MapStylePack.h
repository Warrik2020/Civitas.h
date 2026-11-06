#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../../CivitasCore.h"

namespace CivitasPoly::Map::Rendering::Styles
{
    class MapStylePack : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit MapStylePack(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Map.Rendering.Styles", "MapStylePack") {}
    public:
        void Normalize() const { Call("Normalize", nullptr, 0); }
        float EvalCurve(void* c, float ppt) const { void* args[] = { c, &ppt }; return CallStaticValue<float>("EvalCurve", args, 2); }
        void* GradeLinear(void* c) const { void* args[] = { c }; return Call("GradeLinear", args, 1); }
        void ParseProfile(void* flat, void* t, void* a) const { void* args[] = { flat, &t, &a }; CallStatic("ParseProfile", args, 3); }
        bool TryParseColor(const char* s, void* c) const { void* managed_0 = Api() && Api()->NewString ? Api()->NewString(s ? s : "") : nullptr; void* args[] = { managed_0, &c }; return CallStaticValue<bool>("TryParseColor", args, 2); }
        void* ToLinear(void* c) const { void* args[] = { c }; return CallStatic("ToLinear", args, 1); }
        float ToLinear(float v) const { void* args[] = { &v }; return CallStaticValue<float>("ToLinear", args, 1); }
        int CurrentFormat() const { return ReadStaticField<int>("CurrentFormat"); }
        void* ClassicId() const { return ReadStaticField<void*>("ClassicId"); }
        int format() const { return ReadField<int>("format"); }
        void SetFormat(int value) const { WriteField<int>("format", value); }
        void* name() const { return ReadField<void*>("name"); }
        void SetName(void* value) const { WriteField<void*>("name", value); }
        void* description() const { return ReadField<void*>("description"); }
        void SetDescription(void* value) const { WriteField<void*>("description", value); }
        int order() const { return ReadField<int>("order"); }
        void SetOrder(int value) const { WriteField<int>("order", value); }
        void* paper() const { return ReadField<void*>("paper"); }
        void SetPaper(void* value) const { WriteField<void*>("paper", value); }
        void* fill() const { return ReadField<void*>("fill"); }
        void SetFill(void* value) const { WriteField<void*>("fill", value); }
        void* band() const { return ReadField<void*>("band"); }
        void SetBand(void* value) const { WriteField<void*>("band", value); }
        void* line() const { return ReadField<void*>("line"); }
        void SetLine(void* value) const { WriteField<void*>("line", value); }
        void* labels() const { return ReadField<void*>("labels"); }
        void SetLabels(void* value) const { WriteField<void*>("labels", value); }
        void* state() const { return ReadField<void*>("state"); }
        void SetState(void* value) const { WriteField<void*>("state", value); }
        void* relief() const { return ReadField<void*>("relief"); }
        void SetRelief(void* value) const { WriteField<void*>("relief", value); }
        void* water() const { return ReadField<void*>("water"); }
        void SetWater(void* value) const { WriteField<void*>("water", value); }
        void* coast() const { return ReadField<void*>("coast"); }
        void SetCoast(void* value) const { WriteField<void*>("coast", value); }
        void* lens() const { return ReadField<void*>("lens"); }
        void SetLens(void* value) const { WriteField<void*>("lens", value); }
        float MaxTrackingEm() const { return ReadStaticField<float>("MaxTrackingEm"); }
        void* id() const { return ReadField<void*>("id"); }
        void SetId(void* value) const { WriteField<void*>("id", value); }
        void* folder() const { return ReadField<void*>("folder"); }
        void SetFolder(void* value) const { WriteField<void*>("folder", value); }
        bool shipped() const { return ReadField<bool>("shipped"); }
        void SetShipped(bool value) const { WriteField<bool>("shipped", value); }
        void* ground() const { return ReadField<void*>("ground"); }
        void SetGround(void* value) const { WriteField<void*>("ground", value); }
        void* grain() const { return ReadField<void*>("grain"); }
        void SetGrain(void* value) const { WriteField<void*>("grain", value); }
        bool hasWeight() const { return ReadField<bool>("hasWeight"); }
        void SetHasWeight(bool value) const { WriteField<bool>("hasWeight", value); }
        bool hasKeep() const { return ReadField<bool>("hasKeep"); }
        void SetHasKeep(bool value) const { WriteField<bool>("hasKeep", value); }
        void* weight() const { return ReadField<void*>("weight"); }
        void SetWeight(void* value) const { WriteField<void*>("weight", value); }
        void* keep() const { return ReadField<void*>("keep"); }
        void SetKeep(void* value) const { WriteField<void*>("keep", value); }
        void* warmLinear() const { return ReadField<void*>("warmLinear"); }
        void SetWarmLinear(void* value) const { WriteField<void*>("warmLinear", value); }
        void* bandT() const { return ReadField<void*>("bandT"); }
        void SetBandT(void* value) const { WriteField<void*>("bandT", value); }
        void* bandA() const { return ReadField<void*>("bandA"); }
        void SetBandA(void* value) const { WriteField<void*>("bandA", value); }
        bool hasBandColor() const { return ReadField<bool>("hasBandColor"); }
        void SetHasBandColor(bool value) const { WriteField<bool>("hasBandColor", value); }
        bool hasLineColor() const { return ReadField<bool>("hasLineColor"); }
        void SetHasLineColor(bool value) const { WriteField<bool>("hasLineColor", value); }
        bool hasLabelText() const { return ReadField<bool>("hasLabelText"); }
        void SetHasLabelText(bool value) const { WriteField<bool>("hasLabelText", value); }
        bool hasLabelShadow() const { return ReadField<bool>("hasLabelShadow"); }
        void SetHasLabelShadow(bool value) const { WriteField<bool>("hasLabelShadow", value); }
        void* bandColor() const { return ReadField<void*>("bandColor"); }
        void SetBandColor(void* value) const { WriteField<void*>("bandColor", value); }
        void* lineColor() const { return ReadField<void*>("lineColor"); }
        void SetLineColor(void* value) const { WriteField<void*>("lineColor", value); }
        void* labelText() const { return ReadField<void*>("labelText"); }
        void SetLabelText(void* value) const { WriteField<void*>("labelText", value); }
        void* labelShadow() const { return ReadField<void*>("labelShadow"); }
        void SetLabelShadow(void* value) const { WriteField<void*>("labelShadow", value); }
        bool hasWater() const { return ReadField<bool>("hasWater"); }
        void SetHasWater(bool value) const { WriteField<bool>("hasWater", value); }
        bool hasCoastShadow() const { return ReadField<bool>("hasCoastShadow"); }
        void SetHasCoastShadow(bool value) const { WriteField<bool>("hasCoastShadow", value); }
        void* waterDeep() const { return ReadField<void*>("waterDeep"); }
        void SetWaterDeep(void* value) const { WriteField<void*>("waterDeep", value); }
        void* waterOpen() const { return ReadField<void*>("waterOpen"); }
        void SetWaterOpen(void* value) const { WriteField<void*>("waterOpen", value); }
        void* waterHalo() const { return ReadField<void*>("waterHalo"); }
        void SetWaterHalo(void* value) const { WriteField<void*>("waterHalo", value); }
        void* coastShadowColor() const { return ReadField<void*>("coastShadowColor"); }
        void SetCoastShadowColor(void* value) const { WriteField<void*>("coastShadowColor", value); }
        void* nearBlurPx() const { return ReadField<void*>("nearBlurPx"); }
        void SetNearBlurPx(void* value) const { WriteField<void*>("nearBlurPx", value); }
        void* Classic() const { return ReadStaticField<void*>("Classic"); }
        float FarPpt() const { return ReadStaticField<float>("FarPpt"); }
        float MidPpt() const { return ReadStaticField<float>("MidPpt"); }
        float NearPpt() const { return ReadStaticField<float>("NearPpt"); }
    };
}
