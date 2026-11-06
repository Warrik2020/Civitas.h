#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../CivitasCore.h"

namespace CivitasPoly::Nations
{
    class NationMaskImporter : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit NationMaskImporter(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations", "NationMaskImporter") {}
    public:
        void* ResampleMask(void* src, int srcW, int srcH, int gridW, int gridH) const { void* args[] = { src, &srcW, &srcH, &gridW, &gridH }; return CallStatic("ResampleMask", args, 5); }
        void* DownsampleMask(void* src, int srcW, int srcH, int gridW, int gridH, int f, void* background) const { void* args[] = { src, &srcW, &srcH, &gridW, &gridH, &f, background }; return CallStatic("DownsampleMask", args, 7); }
        void* Discover(void* mask, void* grid, void* background, int minPixelArea, int& skippedNoise, int& skippedOcean) const { void* args[] = { mask, grid, background, &minPixelArea, &skippedNoise, &skippedOcean }; return CallStatic("Discover", args, 6); }
        bool Equals(void* o) const { void* args[] = { o }; return CallValue<bool>("Equals", args, 1); }
        bool Equals(void* o) const { void* args[] = { o }; return CallValue<bool>("Equals", args, 1); }
        int GetHashCode() const { return CallValue<int>("GetHashCode", nullptr, 0); }
        uint8_t r() const { return ReadField<uint8_t>("r"); }
        uint8_t g() const { return ReadField<uint8_t>("g"); }
        uint8_t b() const { return ReadField<uint8_t>("b"); }
        void* color() const { return ReadField<void*>("color"); }
        void SetColor(void* value) const { WriteField<void*>("color", value); }
        void* tiles() const { return ReadField<void*>("tiles"); }
        int minX() const { return ReadField<int>("minX"); }
        void SetMinX(int value) const { WriteField<int>("minX", value); }
        int minY() const { return ReadField<int>("minY"); }
        void SetMinY(int value) const { WriteField<int>("minY", value); }
        int maxX() const { return ReadField<int>("maxX"); }
        void SetMaxX(int value) const { WriteField<int>("maxX", value); }
        int maxY() const { return ReadField<int>("maxY"); }
        void SetMaxY(int value) const { WriteField<int>("maxY", value); }
        int64_t sumX() const { return ReadField<int64_t>("sumX"); }
        void SetSumX(int64_t value) const { WriteField<int64_t>("sumX", value); }
        int64_t sumY() const { return ReadField<int64_t>("sumY"); }
        void SetSumY(int64_t value) const { WriteField<int64_t>("sumY", value); }
    };
}
