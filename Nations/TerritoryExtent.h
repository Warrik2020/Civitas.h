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
        bool Held(int tileIndex) const { void* __callArgs[] = { &tileIndex }; return CallValue<bool>("Held", __callArgs, 1); }
        bool Held(int x, int y) const { void* __callArgs[] = { &x, &y }; return CallValue<bool>("Held", __callArgs, 2); }
        void Mark(int tileIndex, int x, int y) const { void* __callArgs[] = { &tileIndex, &x, &y }; Call("Mark", __callArgs, 3); }
        void NotePeak(int tileCount, int age) const { void* __callArgs[] = { &tileCount, &age }; Call("NotePeak", __callArgs, 2); }
        int everHeldCount() const { return ReadField<int>("everHeldCount"); }
        void everHeldCount(int value) const { WriteField<int>("everHeldCount", value); }
        int peakTileCount() const { return ReadField<int>("peakTileCount"); }
        void peakTileCount(int value) const { WriteField<int>("peakTileCount", value); }
        int peakAge() const { return ReadField<int>("peakAge"); }
        void peakAge(int value) const { WriteField<int>("peakAge", value); }
        int minX() const { return ReadField<int>("minX"); }
        void minX(int value) const { WriteField<int>("minX", value); }
        int minY() const { return ReadField<int>("minY"); }
        void minY(int value) const { WriteField<int>("minY", value); }
        int maxX() const { return ReadField<int>("maxX"); }
        void maxX(int value) const { WriteField<int>("maxX", value); }
        int maxY() const { return ReadField<int>("maxY"); }
        void maxY(int value) const { WriteField<int>("maxY", value); }
        int version() const { return ReadField<int>("version"); }
        void version(int value) const { WriteField<int>("version", value); }
    };
}
