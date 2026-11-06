#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../CivitasCore.h"

namespace CivitasPoly::Nations
{
    class BorderStyle : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit BorderStyle(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations", "BorderStyle") {}
    public:
        void* BandColorFor(void* owner) const { void* __callArgs[] = { owner }; return Call("BandColorFor", __callArgs, 1); }
        void* LineColorFor(void* owner) const { void* __callArgs[] = { owner }; return Call("LineColorFor", __callArgs, 1); }
        void* Clone() const { return Call("Clone", nullptr, 0); }
        int Version() const { return CallValue<int>("Version", nullptr, 0); }
        float widthScale() const { return ReadField<float>("widthScale"); }
        void widthScale(float value) const { WriteField<float>("widthScale", value); }
        float opacity() const { return ReadField<float>("opacity"); }
        void opacity(float value) const { WriteField<float>("opacity", value); }
        float lineWidthPx() const { return ReadField<float>("lineWidthPx"); }
        void lineWidthPx(float value) const { WriteField<float>("lineWidthPx", value); }
        void* lineColor() const { return ReadField<void*>("lineColor"); }
        void lineColor(void* value) const { WriteField<void*>("lineColor", value); }
        bool tintLineFromOwner() const { return ReadField<bool>("tintLineFromOwner"); }
        void tintLineFromOwner(bool value) const { WriteField<bool>("tintLineFromOwner", value); }
        float lineDarken() const { return ReadField<float>("lineDarken"); }
        void lineDarken(float value) const { WriteField<float>("lineDarken", value); }
        float featherPx() const { return ReadField<float>("featherPx"); }
        void featherPx(float value) const { WriteField<float>("featherPx", value); }
        float maxScreenPx() const { return ReadField<float>("maxScreenPx"); }
        void maxScreenPx(float value) const { WriteField<float>("maxScreenPx", value); }
        float dashPx() const { return ReadField<float>("dashPx"); }
        void dashPx(float value) const { WriteField<float>("dashPx", value); }
        float gapPx() const { return ReadField<float>("gapPx"); }
        void gapPx(float value) const { WriteField<float>("gapPx", value); }
        float bandWidthPx() const { return ReadField<float>("bandWidthPx"); }
        void bandWidthPx(float value) const { WriteField<float>("bandWidthPx", value); }
        void* bandColor() const { return ReadField<void*>("bandColor"); }
        void bandColor(void* value) const { WriteField<void*>("bandColor", value); }
        bool tintBandFromOwner() const { return ReadField<bool>("tintBandFromOwner"); }
        void tintBandFromOwner(bool value) const { WriteField<bool>("tintBandFromOwner", value); }
        float bandDarken() const { return ReadField<float>("bandDarken"); }
        void bandDarken(float value) const { WriteField<float>("bandDarken", value); }
        int chaikinIterations() const { return ReadField<int>("chaikinIterations"); }
        void chaikinIterations(int value) const { WriteField<int>("chaikinIterations", value); }
        float rdpEpsilon() const { return ReadField<float>("rdpEpsilon"); }
        void rdpEpsilon(float value) const { WriteField<float>("rdpEpsilon", value); }
        float cornerRoundPx() const { return ReadField<float>("cornerRoundPx"); }
        void cornerRoundPx(float value) const { WriteField<float>("cornerRoundPx", value); }
        int cornerRoundPasses() const { return ReadField<int>("cornerRoundPasses"); }
        void cornerRoundPasses(int value) const { WriteField<int>("cornerRoundPasses", value); }
    };
}
