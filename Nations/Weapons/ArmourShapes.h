#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Weapons
{
    class ArmourShapes : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit ArmourShapes(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Weapons", "ArmourShapes") {}
    public:
        void* Left(void* right) const { void* __callArgs[] = { right }; return CallStatic("Left", __callArgs, 1); }
        void* Skull(float bottomY = 1655.0f, float halfWidth = 90.0f, float crown = 1774.0f) const { void* __callArgs[] = { &bottomY, &halfWidth, &crown }; return CallStatic("Skull", __callArgs, 3); }
        void* Visor(float y0 = 1615.0f, float y1 = 1668.0f, float halfWidth = 72.0f) const { void* __callArgs[] = { &y0, &y1, &halfWidth }; return CallStatic("Visor", __callArgs, 3); }
        void* CheekGuard() const { return CallStatic("CheekGuard", nullptr, 0); }
        void* NeckGuard() const { return CallStatic("NeckGuard", nullptr, 0); }
        void* Crest() const { return CallStatic("Crest", nullptr, 0); }
        void* Gorget() const { return CallStatic("Gorget", nullptr, 0); }
        void* Breastplate(float bottomY = 1000.0f, float topY = 1465.0f, float scale = 1.0f) const { void* __callArgs[] = { &bottomY, &topY, &scale }; return CallStatic("Breastplate", __callArgs, 3); }
        void* Backplate(float bottomY = 1010.0f) const { void* __callArgs[] = { &bottomY }; return CallStatic("Backplate", __callArgs, 1); }
        void* Coat(float bottomY = 850.0f, float sleeveY = 1100.0f) const { void* __callArgs[] = { &bottomY, &sleeveY }; return CallStatic("Coat", __callArgs, 2); }
        void* Padding(float bottomY = 960.0f) const { void* __callArgs[] = { &bottomY }; return CallStatic("Padding", __callArgs, 1); }
        void* Pauldron() const { return CallStatic("Pauldron", nullptr, 0); }
        void* Vambrace() const { return CallStatic("Vambrace", nullptr, 0); }
        void* UpperCannon() const { return CallStatic("UpperCannon", nullptr, 0); }
        void* Gauntlet() const { return CallStatic("Gauntlet", nullptr, 0); }
        void* Cuisse(float bottomY = 560.0f) const { void* __callArgs[] = { &bottomY }; return CallStatic("Cuisse", __callArgs, 1); }
        void* Greave(float topY = 440.0f) const { void* __callArgs[] = { &topY }; return CallStatic("Greave", __callArgs, 1); }
        void* Tasset() const { return CallStatic("Tasset", nullptr, 0); }
        void* GroinGuard() const { return CallStatic("GroinGuard", nullptr, 0); }
        void* Belt() const { return CallStatic("Belt", nullptr, 0); }
        void* Pouch(float x0 = -142.0f, float x1 = -62.0f, float y0 = 880.0f, float y1 = 990.0f) const { void* __callArgs[] = { &x0, &x1, &y0, &y1 }; return CallStatic("Pouch", __callArgs, 4); }
        void* ChestPouch(float x0 = -120.0f, float x1 = -40.0f) const { void* __callArgs[] = { &x0, &x1 }; return CallStatic("ChestPouch", __callArgs, 2); }
        void* Canteen() const { return CallStatic("Canteen", nullptr, 0); }
        void* Actuator() const { return CallStatic("Actuator", nullptr, 0); }
        void* PowerCell() const { return CallStatic("PowerCell", nullptr, 0); }
        void* Sensor() const { return CallStatic("Sensor", nullptr, 0); }
        void* Disc(float cx, float cy, float radius, int sides = 12) const { void* __callArgs[] = { &cx, &cy, &radius, &sides }; return CallStatic("Disc", __callArgs, 4); }
        void* Default_(int kind) const { void* __callArgs[] = { &kind }; return CallStatic("Default", __callArgs, 1); }
    };
}
