<?php
/**
 * @file
 * humanitarianresponse_organizations_data.features.uuid_entities.inc
 */

/**
 * Implements hook_uuid_default_entities().
 */
function humanitarianresponse_organizations_data_uuid_default_entities() {
  $entities = array();

  $entities['organization_types'][] = (object) array(
    '__metadata' => array(
      'type' => 'taxonomy_term',
      'uri' => 'taxonomy_term/2602f085-97ab-ecb4-e55e-ca2a4b4dfbb3',
      'cause' => FALSE,
    ),
    'description' => '',
    'description_field' => array(
      'und' => array(
        0 => array(
          'format' => 'filtered_html',
          'summary' => NULL,
          'value' => '',
        ),
      ),
    ),
    'format' => 'filtered_html',
    'language' => 'und',
    'name' => 'Donor',
    'name_field' => array(
      'und' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Donor',
        ),
      ),
      'en' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Donor',
        ),
      ),
      'fr' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Donateur',
        ),
      ),
      'es' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Donante',
        ),
      ),
    ),
    'path' => array(
      'alias' => 'organization-types/donor',
      'pathauto' => FALSE,
    ),
    'rdf_mapping' => array(
      'rdftype' => array(
        0 => 'skos:Concept',
      ),
      'name' => array(
        'predicates' => array(
          0 => 'rdfs:label',
          1 => 'skos:prefLabel',
        ),
      ),
      'description' => array(
        'predicates' => array(
          0 => 'skos:definition',
        ),
      ),
      'vid' => array(
        'predicates' => array(
          0 => 'skos:inScheme',
        ),
        'type' => 'rel',
      ),
      'parent' => array(
        'predicates' => array(
          0 => 'skos:broader',
        ),
        'type' => 'rel',
      ),
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'language' => 'en',
          'source' => '',
          'status' => '1',
          'translate' => '0',
        ),
        'fr' => array(
          'language' => 'fr',
          'source' => 'en',
          'status' => '1',
          'translate' => '0',
        ),
        'es' => array(
          'language' => 'es',
          'source' => 'en',
          'status' => '1',
          'translate' => '0',
        ),
      ),
    ),
    'uuid' => '2602f085-97ab-ecb4-e55e-ca2a4b4dfbb3',
    'vocabulary_machine_name' => 'organization_types',
    'weight' => '0',
  );
  $entities['organization_types'][] = (object) array(
    '__metadata' => array(
      'type' => 'taxonomy_term',
      'uri' => 'taxonomy_term/f745d3aa-44fd-7b14-e1c2-af1aa29b77ff',
      'cause' => FALSE,
    ),
    'description' => '',
    'description_field' => array(
      'und' => array(
        0 => array(
          'format' => 'filtered_html',
          'summary' => NULL,
          'value' => '',
        ),
      ),
    ),
    'format' => 'filtered_html',
    'language' => 'und',
    'name' => 'Government',
    'name_field' => array(
      'und' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Government',
        ),
      ),
      'en' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Government',
        ),
      ),
      'fr' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Gouvernement',
        ),
      ),
      'es' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Gobierno',
        ),
      ),
    ),
    'path' => array(
      'alias' => 'organization-types/government',
      'pathauto' => FALSE,
    ),
    'rdf_mapping' => array(
      'rdftype' => array(
        0 => 'skos:Concept',
      ),
      'name' => array(
        'predicates' => array(
          0 => 'rdfs:label',
          1 => 'skos:prefLabel',
        ),
      ),
      'description' => array(
        'predicates' => array(
          0 => 'skos:definition',
        ),
      ),
      'vid' => array(
        'predicates' => array(
          0 => 'skos:inScheme',
        ),
        'type' => 'rel',
      ),
      'parent' => array(
        'predicates' => array(
          0 => 'skos:broader',
        ),
        'type' => 'rel',
      ),
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'language' => 'en',
          'source' => '',
          'status' => '1',
          'translate' => '0',
        ),
        'fr' => array(
          'language' => 'fr',
          'source' => 'en',
          'status' => '1',
          'translate' => '0',
        ),
        'es' => array(
          'language' => 'es',
          'source' => 'en',
          'status' => '1',
          'translate' => '0',
        ),
      ),
    ),
    'uuid' => 'f745d3aa-44fd-7b14-e1c2-af1aa29b77ff',
    'vocabulary_machine_name' => 'organization_types',
    'weight' => '0',
  );
  $entities['organization_types'][] = (object) array(
    '__metadata' => array(
      'type' => 'taxonomy_term',
      'uri' => 'taxonomy_term/bc624e17-41f2-24c4-11ea-886410fe0e3d',
      'cause' => FALSE,
    ),
    'description' => '',
    'description_field' => array(
      'und' => array(
        0 => array(
          'format' => 'filtered_html',
          'summary' => NULL,
          'value' => '',
        ),
      ),
    ),
    'format' => 'filtered_html',
    'language' => 'und',
    'name' => 'International NGO',
    'name_field' => array(
      'und' => array(
        0 => array(
          'format' => NULL,
          'value' => 'International NGO',
        ),
      ),
      'en' => array(
        0 => array(
          'format' => NULL,
          'value' => 'International NGO',
        ),
      ),
      'fr' => array(
        0 => array(
          'format' => NULL,
          'value' => 'ONG Internationale',
        ),
      ),
      'es' => array(
        0 => array(
          'format' => NULL,
          'value' => 'ONG internacional',
        ),
      ),
    ),
    'path' => array(
      'alias' => 'organization-types/international-ngo',
      'pathauto' => FALSE,
    ),
    'rdf_mapping' => array(
      'rdftype' => array(
        0 => 'skos:Concept',
      ),
      'name' => array(
        'predicates' => array(
          0 => 'rdfs:label',
          1 => 'skos:prefLabel',
        ),
      ),
      'description' => array(
        'predicates' => array(
          0 => 'skos:definition',
        ),
      ),
      'vid' => array(
        'predicates' => array(
          0 => 'skos:inScheme',
        ),
        'type' => 'rel',
      ),
      'parent' => array(
        'predicates' => array(
          0 => 'skos:broader',
        ),
        'type' => 'rel',
      ),
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'language' => 'en',
          'source' => '',
          'status' => '1',
          'translate' => '0',
        ),
        'fr' => array(
          'language' => 'fr',
          'source' => 'en',
          'status' => '1',
          'translate' => '0',
        ),
        'es' => array(
          'language' => 'es',
          'source' => 'en',
          'status' => '1',
          'translate' => '0',
        ),
      ),
    ),
    'uuid' => 'bc624e17-41f2-24c4-11ea-886410fe0e3d',
    'vocabulary_machine_name' => 'organization_types',
    'weight' => '0',
  );
  $entities['organization_types'][] = (object) array(
    '__metadata' => array(
      'type' => 'taxonomy_term',
      'uri' => 'taxonomy_term/7299c269-3aa3-9044-e161-c6ebe2e6d6c2',
      'cause' => FALSE,
    ),
    'description' => '',
    'description_field' => array(
      'und' => array(
        0 => array(
          'format' => 'filtered_html',
          'summary' => NULL,
          'value' => '',
        ),
      ),
    ),
    'format' => 'filtered_html',
    'language' => 'und',
    'name' => 'International Organization',
    'name_field' => array(
      'und' => array(
        0 => array(
          'format' => NULL,
          'value' => 'International Organization',
        ),
      ),
      'en' => array(
        0 => array(
          'format' => NULL,
          'value' => 'International Organization',
        ),
      ),
      'fr' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Organisation Internationale',
        ),
      ),
      'es' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Organismo internacional',
        ),
      ),
    ),
    'path' => array(
      'alias' => 'organization-types/international-organization',
      'pathauto' => FALSE,
    ),
    'rdf_mapping' => array(
      'rdftype' => array(
        0 => 'skos:Concept',
      ),
      'name' => array(
        'predicates' => array(
          0 => 'rdfs:label',
          1 => 'skos:prefLabel',
        ),
      ),
      'description' => array(
        'predicates' => array(
          0 => 'skos:definition',
        ),
      ),
      'vid' => array(
        'predicates' => array(
          0 => 'skos:inScheme',
        ),
        'type' => 'rel',
      ),
      'parent' => array(
        'predicates' => array(
          0 => 'skos:broader',
        ),
        'type' => 'rel',
      ),
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'language' => 'en',
          'source' => '',
          'status' => '1',
          'translate' => '0',
        ),
        'fr' => array(
          'language' => 'fr',
          'source' => 'en',
          'status' => '1',
          'translate' => '0',
        ),
        'es' => array(
          'language' => 'es',
          'source' => 'en',
          'status' => '1',
          'translate' => '0',
        ),
      ),
    ),
    'uuid' => '7299c269-3aa3-9044-e161-c6ebe2e6d6c2',
    'vocabulary_machine_name' => 'organization_types',
    'weight' => '0',
  );
  $entities['organization_types'][] = (object) array(
    '__metadata' => array(
      'type' => 'taxonomy_term',
      'uri' => 'taxonomy_term/3f56eeff-83ad-fca4-c12c-ab265e846b17',
      'cause' => FALSE,
    ),
    'description' => '',
    'description_field' => array(
      'und' => array(
        0 => array(
          'format' => 'filtered_html',
          'summary' => NULL,
          'value' => '',
        ),
      ),
    ),
    'format' => 'filtered_html',
    'language' => 'und',
    'name' => 'Red Cross',
    'name_field' => array(
      'und' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Red Cross',
        ),
      ),
      'en' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Red Cross',
        ),
      ),
      'fr' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Croix Rouge',
        ),
      ),
      'es' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Cruz Roja',
        ),
      ),
    ),
    'path' => array(
      'alias' => 'organization-types/red-cross',
      'pathauto' => FALSE,
    ),
    'rdf_mapping' => array(
      'rdftype' => array(
        0 => 'skos:Concept',
      ),
      'name' => array(
        'predicates' => array(
          0 => 'rdfs:label',
          1 => 'skos:prefLabel',
        ),
      ),
      'description' => array(
        'predicates' => array(
          0 => 'skos:definition',
        ),
      ),
      'vid' => array(
        'predicates' => array(
          0 => 'skos:inScheme',
        ),
        'type' => 'rel',
      ),
      'parent' => array(
        'predicates' => array(
          0 => 'skos:broader',
        ),
        'type' => 'rel',
      ),
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'language' => 'en',
          'source' => '',
          'status' => '1',
          'translate' => '0',
        ),
        'fr' => array(
          'language' => 'fr',
          'source' => 'en',
          'status' => '1',
          'translate' => '0',
        ),
        'es' => array(
          'language' => 'es',
          'source' => 'en',
          'status' => '1',
          'translate' => '0',
        ),
      ),
    ),
    'uuid' => '3f56eeff-83ad-fca4-c12c-ab265e846b17',
    'vocabulary_machine_name' => 'organization_types',
    'weight' => '0',
  );
  $entities['organization_types'][] = (object) array(
    '__metadata' => array(
      'type' => 'taxonomy_term',
      'uri' => 'taxonomy_term/02c1b1cb-2a3f-1c44-6943-1919a6d70b07',
      'cause' => FALSE,
    ),
    'description' => '',
    'description_field' => array(
      'und' => array(
        0 => array(
          'format' => 'filtered_html',
          'summary' => NULL,
          'value' => '',
        ),
      ),
    ),
    'format' => 'filtered_html',
    'language' => 'und',
    'name' => 'Research',
    'name_field' => array(
      'und' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Research',
        ),
      ),
      'en' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Research',
        ),
      ),
      'fr' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Recherche',
        ),
      ),
      'es' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Investigación',
        ),
      ),
    ),
    'path' => array(
      'alias' => 'organization-types/research',
      'pathauto' => FALSE,
    ),
    'rdf_mapping' => array(
      'rdftype' => array(
        0 => 'skos:Concept',
      ),
      'name' => array(
        'predicates' => array(
          0 => 'rdfs:label',
          1 => 'skos:prefLabel',
        ),
      ),
      'description' => array(
        'predicates' => array(
          0 => 'skos:definition',
        ),
      ),
      'vid' => array(
        'predicates' => array(
          0 => 'skos:inScheme',
        ),
        'type' => 'rel',
      ),
      'parent' => array(
        'predicates' => array(
          0 => 'skos:broader',
        ),
        'type' => 'rel',
      ),
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'language' => 'en',
          'source' => '',
          'status' => '1',
          'translate' => '0',
        ),
        'fr' => array(
          'language' => 'fr',
          'source' => 'en',
          'status' => '1',
          'translate' => '0',
        ),
        'es' => array(
          'language' => 'es',
          'source' => 'en',
          'status' => '1',
          'translate' => '0',
        ),
      ),
    ),
    'uuid' => '02c1b1cb-2a3f-1c44-6943-1919a6d70b07',
    'vocabulary_machine_name' => 'organization_types',
    'weight' => '0',
  );
  $entities['organization_types'][] = (object) array(
    '__metadata' => array(
      'type' => 'taxonomy_term',
      'uri' => 'taxonomy_term/e1a4ac46-e99f-b2d4-b13a-3f0502760aad',
      'cause' => FALSE,
    ),
    'description' => '',
    'description_field' => array(
      'und' => array(
        0 => array(
          'format' => 'filtered_html',
          'summary' => NULL,
          'value' => '',
        ),
      ),
    ),
    'format' => 'filtered_html',
    'language' => 'und',
    'name' => 'United Nations',
    'name_field' => array(
      'und' => array(
        0 => array(
          'format' => NULL,
          'value' => 'United Nations',
        ),
      ),
      'en' => array(
        0 => array(
          'format' => NULL,
          'value' => 'United Nations',
        ),
      ),
      'fr' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Nations Unies',
        ),
      ),
      'es' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Naciones Unidas',
        ),
      ),
    ),
    'path' => array(
      'alias' => 'organization-types/united-nations',
      'pathauto' => FALSE,
    ),
    'rdf_mapping' => array(
      'rdftype' => array(
        0 => 'skos:Concept',
      ),
      'name' => array(
        'predicates' => array(
          0 => 'rdfs:label',
          1 => 'skos:prefLabel',
        ),
      ),
      'description' => array(
        'predicates' => array(
          0 => 'skos:definition',
        ),
      ),
      'vid' => array(
        'predicates' => array(
          0 => 'skos:inScheme',
        ),
        'type' => 'rel',
      ),
      'parent' => array(
        'predicates' => array(
          0 => 'skos:broader',
        ),
        'type' => 'rel',
      ),
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'language' => 'en',
          'source' => '',
          'status' => '1',
          'translate' => '0',
        ),
        'fr' => array(
          'language' => 'fr',
          'source' => 'en',
          'status' => '1',
          'translate' => '0',
        ),
        'es' => array(
          'language' => 'es',
          'source' => 'en',
          'status' => '1',
          'translate' => '0',
        ),
      ),
    ),
    'uuid' => 'e1a4ac46-e99f-b2d4-b13a-3f0502760aad',
    'vocabulary_machine_name' => 'organization_types',
    'weight' => '0',
  );
  $entities['organization_types'][] = (object) array(
    '__metadata' => array(
      'type' => 'taxonomy_term',
      'uri' => 'taxonomy_term/da9a64b6-03c5-ffb4-8d5b-dbdedd65ac71',
      'cause' => FALSE,
    ),
    'description' => '',
    'description_field' => array(
      'und' => array(
        0 => array(
          'format' => 'filtered_html',
          'summary' => NULL,
          'value' => '',
        ),
      ),
    ),
    'format' => 'filtered_html',
    'language' => 'und',
    'name' => 'Media',
    'name_field' => array(
      'und' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Media',
        ),
      ),
      'en' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Media',
        ),
      ),
      'fr' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Médias',
        ),
      ),
      'es' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Medios de comunicación',
        ),
      ),
    ),
    'path' => array(
      'alias' => 'organization-types/media',
      'pathauto' => FALSE,
    ),
    'rdf_mapping' => array(
      'rdftype' => array(
        0 => 'skos:Concept',
      ),
      'name' => array(
        'predicates' => array(
          0 => 'rdfs:label',
          1 => 'skos:prefLabel',
        ),
      ),
      'description' => array(
        'predicates' => array(
          0 => 'skos:definition',
        ),
      ),
      'vid' => array(
        'predicates' => array(
          0 => 'skos:inScheme',
        ),
        'type' => 'rel',
      ),
      'parent' => array(
        'predicates' => array(
          0 => 'skos:broader',
        ),
        'type' => 'rel',
      ),
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'language' => 'en',
          'source' => '',
          'status' => '1',
          'translate' => '0',
        ),
        'fr' => array(
          'language' => 'fr',
          'source' => 'en',
          'status' => '1',
          'translate' => '0',
        ),
        'es' => array(
          'language' => 'es',
          'source' => 'en',
          'status' => '1',
          'translate' => '0',
        ),
      ),
    ),
    'uuid' => 'da9a64b6-03c5-ffb4-8d5b-dbdedd65ac71',
    'vocabulary_machine_name' => 'organization_types',
    'weight' => '0',
  );
  $entities['organization_types'][] = (object) array(
    '__metadata' => array(
      'type' => 'taxonomy_term',
      'uri' => 'taxonomy_term/b1109f9e-735a-85e4-d957-36e4c1fbb017',
      'cause' => FALSE,
    ),
    'description' => '',
    'description_field' => array(
      'und' => array(
        0 => array(
          'format' => 'filtered_html',
          'summary' => NULL,
          'value' => '',
        ),
      ),
    ),
    'format' => 'filtered_html',
    'language' => 'und',
    'name' => 'Military',
    'name_field' => array(
      'und' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Military',
        ),
      ),
      'en' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Military',
        ),
      ),
      'fr' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Militaire',
        ),
      ),
      'es' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Fuerzas Armadas',
        ),
      ),
    ),
    'path' => array(
      'alias' => 'organization-types/military',
      'pathauto' => FALSE,
    ),
    'rdf_mapping' => array(
      'rdftype' => array(
        0 => 'skos:Concept',
      ),
      'name' => array(
        'predicates' => array(
          0 => 'rdfs:label',
          1 => 'skos:prefLabel',
        ),
      ),
      'description' => array(
        'predicates' => array(
          0 => 'skos:definition',
        ),
      ),
      'vid' => array(
        'predicates' => array(
          0 => 'skos:inScheme',
        ),
        'type' => 'rel',
      ),
      'parent' => array(
        'predicates' => array(
          0 => 'skos:broader',
        ),
        'type' => 'rel',
      ),
    ),
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'language' => 'en',
          'source' => '',
          'status' => '1',
          'translate' => '0',
        ),
        'fr' => array(
          'language' => 'fr',
          'source' => 'en',
          'status' => '1',
          'translate' => '0',
        ),
        'es' => array(
          'language' => 'es',
          'source' => 'en',
          'status' => '1',
          'translate' => '0',
        ),
      ),
    ),
    'uuid' => 'b1109f9e-735a-85e4-d957-36e4c1fbb017',
    'vocabulary_machine_name' => 'organization_types',
    'weight' => '0',
  );

  return $entities;
}
