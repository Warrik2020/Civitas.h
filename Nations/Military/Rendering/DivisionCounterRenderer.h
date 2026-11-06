#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../../CivitasCore.h"

namespace CivitasPoly::Nations::Military::Rendering
{
    class DivisionCounterRenderer : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit DivisionCounterRenderer(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Military.Rendering", "DivisionCounterRenderer") {}
    public:
        bool MegaCounterAt(int nationId, void* world, float slackWorld, void* center) const { void* args[] = { &nationId, world, &slackWorld, &center }; return CallStaticValue<bool>("MegaCounterAt", args, 4); }
        void* FrameHalfExtents(void* cfg, float radius, float& drop) const { void* args[] = { cfg, &radius, &drop }; return CallStatic("FrameHalfExtents", args, 3); }
        float FrameFoot(void* cfg, float radius) const { void* args[] = { cfg, &radius }; return CallStaticValue<float>("FrameFoot", args, 2); }
        float DrawnRadiusTiles(void* cfg, float body) const { void* args[] = { cfg, &body }; return CallStaticValue<float>("DrawnRadiusTiles", args, 2); }
        void Sync(void* militaries, void* nationOf, void* cam, int tick, int playerNationId, bool smoothing) const { void* args[] = { militaries, nationOf, cam, &tick, &playerNationId, &smoothing }; Call("Sync", args, 6); }
        void SetIconStyle(bool on) const { void* args[] = { &on }; Call("SetIconStyle", args, 1); }
        void SetFlagStyle(bool on) const { void* args[] = { &on }; Call("SetFlagStyle", args, 1); }
        void InvalidateOwnership() const { Call("InvalidateOwnership", nullptr, 0); }
        void InvalidateMerge() const { Call("InvalidateMerge", nullptr, 0); }
        void NoteSpawn() const { Call("NoteSpawn", nullptr, 0); }
        void SetVisible(bool visible) const { void* args[] = { &visible }; Call("SetVisible", args, 1); }
        void Destroy() const { Call("Destroy", nullptr, 0); }
        bool Standards() const { return ReadStaticField<bool>("Standards"); }
        void SetStandards(bool value) const { WriteStaticField<bool>("Standards", value); }
        bool Shadows() const { return ReadStaticField<bool>("Shadows"); }
        void SetShadows(bool value) const { WriteStaticField<bool>("Shadows", value); }
        void* frame() const { return ReadField<void*>("frame"); }
        void SetFrame(void* value) const { WriteField<void*>("frame", value); }
        void* tr() const { return ReadField<void*>("tr"); }
        void SetTr(void* value) const { WriteField<void*>("tr", value); }
        void* tmp() const { return ReadField<void*>("tmp"); }
        void SetTmp(void* value) const { WriteField<void*>("tmp", value); }
        void* mr() const { return ReadField<void*>("mr"); }
        void SetMr(void* value) const { WriteField<void*>("mr", value); }
        int number() const { return ReadField<int>("number"); }
        void SetNumber(int value) const { WriteField<int>("number", value); }
        bool shown() const { return ReadField<bool>("shown"); }
        void SetShown(bool value) const { WriteField<bool>("shown", value); }
        void* wrotePos() const { return ReadField<void*>("wrotePos"); }
        void SetWrotePos(void* value) const { WriteField<void*>("wrotePos", value); }
        float wroteR() const { return ReadField<float>("wroteR"); }
        void SetWroteR(float value) const { WriteField<float>("wroteR", value); }
        void* anchor() const { return ReadField<void*>("anchor"); }
        void SetAnchor(void* value) const { WriteField<void*>("anchor", value); }
        float r() const { return ReadField<float>("r"); }
        void SetR(float value) const { WriteField<float>("r", value); }
        bool upright() const { return ReadField<bool>("upright"); }
        void SetUpright(bool value) const { WriteField<bool>("upright", value); }
        void* wroteShape() const { return ReadField<void*>("wroteShape"); }
        void SetWroteShape(void* value) const { WriteField<void*>("wroteShape", value); }
        void* anchor() const { return ReadField<void*>("anchor"); }
        void SetAnchor(void* value) const { WriteField<void*>("anchor", value); }
        float r() const { return ReadField<float>("r"); }
        void SetR(float value) const { WriteField<float>("r", value); }
        float reach() const { return ReadField<float>("reach"); }
        void SetReach(float value) const { WriteField<float>("reach", value); }
        int v() const { return ReadField<int>("v"); }
        void SetV(int value) const { WriteField<int>("v", value); }
        int i() const { return ReadField<int>("i"); }
        void SetI(int value) const { WriteField<int>("i", value); }
        int f() const { return ReadField<int>("f"); }
        void SetF(int value) const { WriteField<int>("f", value); }
        int s() const { return ReadField<int>("s"); }
        void SetS(int value) const { WriteField<int>("s", value); }
        int vt() const { return ReadField<int>("vt"); }
        void SetVt(int value) const { WriteField<int>("vt", value); }
        int it() const { return ReadField<int>("it"); }
        void SetIt(int value) const { WriteField<int>("it", value); }
        int ft() const { return ReadField<int>("ft"); }
        void SetFt(int value) const { WriteField<int>("ft", value); }
        int st() const { return ReadField<int>("st"); }
        void SetSt(int value) const { WriteField<int>("st", value); }
        float top() const { return ReadField<float>("top"); }
        void SetTop(float value) const { WriteField<float>("top", value); }
        float bottom() const { return ReadField<float>("bottom"); }
        void SetBottom(float value) const { WriteField<float>("bottom", value); }
        float left() const { return ReadField<float>("left"); }
        void SetLeft(float value) const { WriteField<float>("left", value); }
        float right() const { return ReadField<float>("right"); }
        void SetRight(float value) const { WriteField<float>("right", value); }
        float pad() const { return ReadField<float>("pad"); }
        void SetPad(float value) const { WriteField<float>("pad", value); }
        float bar() const { return ReadField<float>("bar"); }
        void SetBar(float value) const { WriteField<float>("bar", value); }
        float stripeRight() const { return ReadField<float>("stripeRight"); }
        void SetStripeRight(float value) const { WriteField<float>("stripeRight", value); }
        float barLeft() const { return ReadField<float>("barLeft"); }
        void SetBarLeft(float value) const { WriteField<float>("barLeft", value); }
        void* number() const { return ReadField<void*>("number"); }
        void SetNumber(void* value) const { WriteField<void*>("number", value); }
        float digitH() const { return ReadField<float>("digitH"); }
        void SetDigitH(float value) const { WriteField<float>("digitH", value); }
        void* fill() const { return ReadField<void*>("fill"); }
        void SetFill(void* value) const { WriteField<void*>("fill", value); }
        void* rim() const { return ReadField<void*>("rim"); }
        void SetRim(void* value) const { WriteField<void*>("rim", value); }
        void* icon() const { return ReadField<void*>("icon"); }
        void SetIcon(void* value) const { WriteField<void*>("icon", value); }
        void* crack() const { return ReadField<void*>("crack"); }
        void SetCrack(void* value) const { WriteField<void*>("crack", value); }
        void* glyph() const { return ReadField<void*>("glyph"); }
        void SetGlyph(void* value) const { WriteField<void*>("glyph", value); }
        uint8_t alpha() const { return ReadField<uint8_t>("alpha"); }
        void SetAlpha(uint8_t value) const { WriteField<uint8_t>("alpha", value); }
        bool darkGlyph() const { return ReadField<bool>("darkGlyph"); }
        void SetDarkGlyph(bool value) const { WriteField<bool>("darkGlyph", value); }
        bool isMine() const { return ReadField<bool>("isMine"); }
        void SetIsMine(bool value) const { WriteField<bool>("isMine", value); }
        bool isHostile() const { return ReadField<bool>("isHostile"); }
        void SetIsHostile(bool value) const { WriteField<bool>("isHostile", value); }
        bool isBystander() const { return ReadField<bool>("isBystander"); }
        void SetIsBystander(bool value) const { WriteField<bool>("isBystander", value); }
    };
}
