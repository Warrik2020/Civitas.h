#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Military
{
    class BorderChains : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit BorderChains(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Military", "BorderChains") {}
    public:
        void Walk(void* tiles, int w, int h, float spacing, void* capital, void* samples, void* linePoints = nullptr, void* lineBreaks = nullptr, float lineStep) const { void* args[] = { tiles, &w, &h, &spacing, capital, samples, linePoints, lineBreaks, &lineStep }; CallStatic("Walk", args, 9); }
        float ox() const { return ReadField<float>("ox"); }
        void SetOx(float value) const { WriteField<float>("ox", value); }
        float oy() const { return ReadField<float>("oy"); }
        void SetOy(float value) const { WriteField<float>("oy", value); }
        bool flag() const { return ReadField<bool>("flag"); }
        void SetFlag(bool value) const { WriteField<bool>("flag", value); }
        void* pos() const { return ReadField<void*>("pos"); }
        void SetPos(void* value) const { WriteField<void*>("pos", value); }
        void* outward() const { return ReadField<void*>("outward"); }
        void SetOutward(void* value) const { WriteField<void*>("outward", value); }
        bool flag() const { return ReadField<bool>("flag"); }
        void SetFlag(bool value) const { WriteField<bool>("flag", value); }
        int tile() const { return ReadField<int>("tile"); }
        void SetTile(int value) const { WriteField<int>("tile", value); }
        int chain() const { return ReadField<int>("chain"); }
        void SetChain(int value) const { WriteField<int>("chain", value); }
    };
}
