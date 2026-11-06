#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../CivitasCore.h"

namespace CivitasPoly::Nations
{
    class OccupationRenderer : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit OccupationRenderer(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations", "OccupationRenderer") {}
    public:
        void Sync() const { Call("Sync", nullptr, 0); }
        void SetVisible(bool visible) const { void* __callArgs[] = { &visible }; Call("SetVisible", __callArgs, 1); }
        void SetFade(float alpha) const { void* __callArgs[] = { &alpha }; Call("SetFade", __callArgs, 1); }
        int CatchUp(int x0, int y0, int x1, int y1) const { void* __callArgs[] = { &x0, &y0, &x1, &y1 }; return CallValue<int>("CatchUp", __callArgs, 4); }
        int CountDeferred(int x0, int y0, int x1, int y1) const { void* __callArgs[] = { &x0, &y0, &x1, &y1 }; return CallValue<int>("CountDeferred", __callArgs, 4); }
        void Destroy() const { Call("Destroy", nullptr, 0); }
        float hatchWhiten() const { return ReadField<float>("hatchWhiten"); }
        void hatchWhiten(float value) const { WriteField<float>("hatchWhiten", value); }
        float hatchAlpha() const { return ReadField<float>("hatchAlpha"); }
        void hatchAlpha(float value) const { WriteField<float>("hatchAlpha", value); }
        float outlineWhiten() const { return ReadField<float>("outlineWhiten"); }
        void outlineWhiten(float value) const { WriteField<float>("outlineWhiten", value); }
        float outlineAlpha() const { return ReadField<float>("outlineAlpha"); }
        void outlineAlpha(float value) const { WriteField<float>("outlineAlpha", value); }
        float crowdedOutlineWhiten() const { return ReadField<float>("crowdedOutlineWhiten"); }
        void crowdedOutlineWhiten(float value) const { WriteField<float>("crowdedOutlineWhiten", value); }
        float crowdedHatchWhiten() const { return ReadField<float>("crowdedHatchWhiten"); }
        void crowdedHatchWhiten(float value) const { WriteField<float>("crowdedHatchWhiten", value); }
        float crowdedHatchAlpha() const { return ReadField<float>("crowdedHatchAlpha"); }
        void crowdedHatchAlpha(float value) const { WriteField<float>("crowdedHatchAlpha", value); }
        float flashSeconds() const { return ReadField<float>("flashSeconds"); }
        void flashSeconds(float value) const { WriteField<float>("flashSeconds", value); }
        float flashWhiten() const { return ReadField<float>("flashWhiten"); }
        void flashWhiten(float value) const { WriteField<float>("flashWhiten", value); }
        float flashAlpha() const { return ReadField<float>("flashAlpha"); }
        void flashAlpha(float value) const { WriteField<float>("flashAlpha", value); }
    };
}
