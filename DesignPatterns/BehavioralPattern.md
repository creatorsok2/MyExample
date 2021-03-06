# 개요
행동 패턴(behavioral pattern)은 어떤 처리의 책임을 어느 객체에 할당하는 것이 좋은지, 알고리즘을 어느 객체에 정의하는 것이 좋은지 등을 다룹니다. 응용프로그램에 따라서 행동이 다른 객체로 옮겨가거나 알고리즘이 대체될 때가 생기기 마련입니다. 이런한 변화의 개념을 만족할 수 있는 것이 행동 패턴입니다. 행동 패턴은 객체나 클래스에 대한 패턴을 정의하는 것이 아니고, 그들 간의 교루 방법에 대하여 정의하는 것입니다. 이러한 패턴은 런타임에 수행하기 어려운 복잡한 제어 구조를 패턴화한 것입니다. 이 행동 패턴을 사용하면 우리는 객체 간의 제어 구조보다는 객체들을 어떻게 연결시킬 것인가에 좀더 중점을 둘 수 있습니다.  
행동 클래스 패턴(behavioral class pattern)은 클래스 사이에 행동 책임을 분산하기 위해서 상속을 사용합니다. 이 장에서는 이와 관련된 패턴 두 가지를 보게 될 것입니다. 첫째, 템플릿 메서드 패턴은 두 가지 가운데 좀더 간단하며, 일반적인 패턴입니다. 템플릿 메서드는 알고리즘에 대한 추상화된 정의로, 알고리즘을 한 단계씩 정의 합니다. 각 단계는 추상 연산 또는 기본 연산 중 하나입니다. 기본 연산(primitive operation)은 자신이 처리 내용을 청의하고 구현 내용을 확정한 연산을 의미합니다. 추상 메서드의 실제 구체적인 구현은 서브클래스가 정의합니다. 두 번째 행동 클래스 패턴은 해석자 패턴으로, 문법을 클래스 계통으로 구성하고 이 클래스들의 인스턴스에 대한연산으로서 해석자를 구현합니다.  
행동 객체 패턴(behavioral object pattern)은 상속보다는 복합을 통해서 객체 사이에 행동 처리의 책임을 분산합니다. 측, 하나의 객체가 스스로 모든 처리를 하는 것이 아니라, 관련된 객체들이 하나의 처리를 책임지는 방법입니다. 여기서 중요한 것은 이렇게 관련된 객체들이 서로를 어떻게 알 수 있도록 할 것인가입니다. 만약 이런 객체들의 그룹이 각각 객체에 대한 참조자를 관리해야 한다면, 객체 간의 의존성이 높아집니다. 최악의 상황에서는 각 객체가 관련된 다른 모든 객체를 다 알아야 할 때도 있을 수 있습니다. 중재자 패턴은 관련된 객체 집합 사이의 중재자로 새로운 객체를 하나 도입함으로써 이 상황을 피하게 해 줍니다. 이 중재자 객체가 관련 객체 간의 처리를 담당함으로써, 객체 간의 결합도가 느슨해질 수 있습니다.  

# 책임 연쇄(CHAIN OF RESPONSIBILITY)

## 의도 
메시지를 보내는 객체와 이를 받아 처리하는 객체들 간의 결합도를 없애기 위한 패턴입니다. 하나의 요청에 대한 처리가 반드시 한 객체에서만 되지 않고, 여러 객체에게 그 처리 기회를 주려는 것입니다. 
