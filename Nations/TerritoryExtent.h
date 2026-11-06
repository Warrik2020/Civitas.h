#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../CivitasCore.h"

namespace CivitasPoly::Nations
{
    class TerritoryExtent : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit TerritoryExtent(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations", "TerritoryExtent") {}
    public:
        bool Held(int tileIndex) const { void* args[] = { &tileIndex }; return CallValue<bool>("Held", args, 1); }
        bool Held(int x, int y) const { void* args[] = { &x, &y }; return CallValue<bool>("Held", args, 2); }
        void Mark(int tileIndex, int x, int y) const { void* args[] = { &tileIndex, &x, &y }; Call("Mark", args, 3); }
        void NotePeak(int tileCount, int age) const { void* args[] = { &tileCount, &age }; Call("NotePeak", args, 2); }
        int everHeldCount() const { return ReadField<int>("everHeldCount"); }
        void SetEverHeldCount(int value) const { WriteField<int>("everHeldCount", value); }
        int peakTileCount() const { return ReadField<int>("peakTileCount"); }
        void SetPeakTileCount(int value) const { WriteField<int>("peakTileCount", value); }
        int peakAge() const { return ReadField<int>("peakAge"); }
        void SetPeakAge(int value) const { WriteField<int>("peakAge", value); }
        int minX() const { return ReadField<int>("minX"); }
        void SetMinX(int value) const { WriteField<int>("minX", value); }
        int minY() const { return ReadField<int>("minY"); }
        void SetMinY(int value) const { WriteField<int>("minY", value); }
        int maxX() const { return ReadField<int>("maxX"); }
        void SetMaxX(int value) const { WriteField<int>("maxX", value); }
        int maxY() const { return ReadField<int>("maxY"); }
        void SetMaxY(int value) const { WriteField<int>("maxY", value); }
        int version() const { return ReadField<int>("version"); }
        void SetVersion(int value) const { WriteField<int>("version", value); }
    };
}
